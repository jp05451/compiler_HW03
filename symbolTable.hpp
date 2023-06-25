#ifndef SYMBOLTABLE_HPP
#define SYMBOLTABLE_HPP
#include <vector>
#include <set>
#include <string>
#include <unordered_map>
#include <algorithm>
#include <iostream>
#include <iomanip>
#include <stack>
#include <cstring>

#define MAX_LINE_LENG 256

using namespace std;

stack<int> scopeStack;
int javaStackNumber = 0;

enum dataType
{
    type_int,
    type_real,
    type_string,
    type_bool,
    type_array,
    // funcion
    type_function,
    type_null

};

string typeString[] = {
    "int",
    "real",
    "string",
    "bool",
    "array",
    // function
    "function"};

class funcData
{
public:
    int funcParamNumber;
    dataType funcParam[MAX_LINE_LENG];
};

void copyFuncData(funcData &dest, const funcData &src)
{
    dest.funcParamNumber = src.funcParamNumber;
    for (int i = 0; i < src.funcParamNumber; i++)
    {
        dest.funcParam[i] = src.funcParam[i];
    }
    return;
}

// template<class T>
struct tokenInfo
{

    // //token id
    char tokenID[MAX_LINE_LENG];
    // string tokenID;
    dataType dType;

    // token data
    union value
    {
        int intValue;
        double doubleValue;
        int boolValue;
    } value;
    char stringValue[MAX_LINE_LENG];

    // funcData funcParams;

    // // token type
    int is_array;
    int is_function;
    int is_const;

    int javaStackNum;
};

void copyTokenInfo(tokenInfo &dest, const tokenInfo &src)
{
    strcpy(dest.tokenID, src.tokenID);
    dest.dType = src.dType;
    // dest.intValue = src.intValue;
    // dest.doubleValue = src.doubleValue;
    // dest.boolValue = src.boolValue;
    dest.value = src.value;
    strcpy(dest.stringValue, src.stringValue);

    // copyFuncData(dest.funcParams, src.funcParams);

    dest.is_array = src.is_array;
    dest.is_function = src.is_function;
    dest.is_const = src.is_const;

    dest.javaStackNum = src.javaStackNum;
}

int compareTokenInfo(const tokenInfo &info1, const tokenInfo &info2)
{
    if (info1.dType != info2.dType)
        return 0;
    else
        return 1;
}

void initializeTokenInfo(tokenInfo &info)
{
    strcpy(info.tokenID, "");     // Initialize tokenID as an empty string
    info.dType = type_null;       // Initialize dType with default value
    info.value.intValue = 0;      // Initialize intValu with default value
    info.value.doubleValue = 0.0; // Initialize doubleValue with default value
    info.value.boolValue = 0;     // Initialize boolValue with default value
    strcpy(info.stringValue, ""); // Initialize stringValue as an empty string
    info.is_array = false;        // Initialize is_array with default value
    info.is_function = false;     // Initialize is_function with default value
    info.is_const = false;        // Initialize is_const with default value
    info.javaStackNum = 0;
}

// class funcVar
// {
// public:
//     string varID;
//     dataType funcVarType;
//     bool isArray;
// };

class symbolData
{
public:
    vector<int> stackNum;
    vector<dataType> funcParameters;
    tokenInfo info;
};

//**************************************function **************************************

bool isNumeric(std::string const &str)
{
    auto it = str.begin();
    while (it != str.end() && std::isdigit(*it))
    {
        it++;
    }
    return !str.empty() && it == str.end();
}

class symbolTable
{
public:
    symbolTable() {}
    ~symbolTable() {}
    void creat();
    bool lookup(const string &symbol);
    void insert(const tokenInfo &symbol, int stackNum);
    void insertStack(int, int);
    bool canAccess(const string &, int);
    bool funcVarCorrect(string funcName, vector<dataType> &inputVar);
    void dump();
    // dataType getType(const string &, bool);

    unordered_map<string, symbolData> table;
};

void symbolTable::creat() {}

bool symbolTable::lookup(const string &symbol)
{
    unordered_map<string, symbolData>::iterator got = table.find(symbol);
    if (got == table.end())
        return 0;
    else
        return 1;
}

void symbolTable::insert(const tokenInfo &symbol, int _stackNum)
{

    copyTokenInfo(table[symbol.tokenID].info, symbol);
    table[symbol.tokenID].stackNum.push_back(_stackNum);
    // table[symbol.tokenID].javaStackNumber = javaStack;
    if (scopeStack.empty())
        insertStack(0, _stackNum);
    else
        insertStack(scopeStack.top(), _stackNum);
    cout << symbol.tokenID << " is inserted in stack " << _stackNum << endl;
}

void symbolTable::insertStack(int lastStack, int currentStack)
{
    for (auto &eachSymbol : table)
    {
        if (eachSymbol.second.stackNum[0] != 0)
        // the symbol is not global
        {
            vector<int>::iterator canBeAccess = find(eachSymbol.second.stackNum.begin(), eachSymbol.second.stackNum.end(), lastStack);
            
            // the input stack can access this symbol in last stack
            if (canBeAccess != eachSymbol.second.stackNum.end())
            {
                eachSymbol.second.stackNum.push_back(currentStack);
                cout << eachSymbol.first << " can be access at stack " << currentStack << endl;
            }
        }
    }
}

void symbolTable::dump()
{
    int width = 20;
    cout << "==============================" << endl;
    cout << "Symbol Table:" << endl;

    cout << "ID"
         << "\t\t"
         << "type"
         << "\t\t"
         << "stack"
         << endl;

    for (auto &a : table)
    {
        cout << a.first << "\t\t";
        if (a.second.info.is_const)
        {
            cout << "const ";
        }

        else if (a.second.info.is_function)
        {
            cout << "function ";
        }

        else if (a.second.info.is_array)
        {
            cout << "array ";
        }
        else
            cout << "normal ";

        cout << typeString[a.second.info.dType % 6] << "\t\t";
        for (auto s : a.second.stackNum)
        {
            cout << s << " ";
        }
        cout << endl;
    }
}

bool symbolTable::canAccess(const string &symbol, int currentScope)
{
    if (lookup(symbol) == 0)
    {
        cout << "ERROR: " << symbol << " undeclare" << endl;
        return 0;
    }
    if (table[symbol].stackNum[0] == 0)
    {
        return 1;
    }
    vector<int>::iterator it = find(table[symbol].stackNum.begin(), table[symbol].stackNum.end(), currentScope);
    if (it != table[symbol].stackNum.end())
    {
        return 1;
    }
    return 0;
}

dataType intToType(int number)
{
    switch (number)
    {
    case 0:
        return type_int;
    case 1:
        return type_real;
    case 2:
        return type_string;
    case 3:
        return type_bool;
    }
}

bool symbolTable::funcVarCorrect(string funcName, vector<dataType> &inputVar)
{
    if (lookup(funcName) == 0)
    {
        cout << "ERROR: funcName " << funcName << " undeclare" << endl;
        return 0;
    }

    if (!table[funcName].info.is_function || inputVar.size() != table[funcName].funcParameters.size())
        return 0;
    for (int i = 0; i < inputVar.size(); i++)
    {
        if (table[funcName].funcParameters[i] != inputVar[i])
            return 0;
    }
    return 1;
}

#endif