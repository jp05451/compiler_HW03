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

// template<class T>
struct tokenInfo
{

    // //token id
    char tokenID[256];
    // string tokenID;
    dataType dType;

    // token data
    int intValue;
    double doubleValue;
    int boolValue;

    char stringValue[256];

    // // token type
    int is_array;
    int is_function;
    int is_const;
};

void copyTokenInfo(struct tokenInfo *dest, const struct tokenInfo *src)
{
    strcpy(dest->tokenID, src->tokenID);
    dest->dType = src->dType;
    dest->intValue = src->intValue;
    dest->doubleValue = src->doubleValue;
    dest->boolValue = src->boolValue;
    strcpy(dest->stringValue, src->stringValue);
    dest->is_array = src->is_array;
    dest->is_function = src->is_function;
    dest->is_const = src->is_const;
}

// enum master_type
// {
//     is_normal,
//     is_arr,
//     is_constant,
//     is_func
// };

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

// //**************************************function **************************************

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
    void insert(const tokenInfo symbol, int stackNum);
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

void symbolTable::insert(const tokenInfo symbol, int _stackNum)
{

    table[symbol.tokenID].info = symbol;
    table[symbol.tokenID].stackNum.push_back(_stackNum);
    // insertStack(symbol, scopeStack.top(), _stackNum);
    // cout << symbol << " is inserted in stack " << _stackNum << endl;
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

        if (a.second.info.is_function)
        {
            cout << "function ";
        }

        else if (a.second.info.is_array)
        {
            cout << "array ";
        }
        else
            cout << "normal ";

        cout << typeString[a.second.info.dType%7] << "\t\t";
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

    if (!table[funcName].info.is_function||inputVar.size() != table[funcName].funcParameters.size())
        return 0;
    for (int i = 0; i < inputVar.size(); i++)
    {
        if (table[funcName].funcParameters[i] != inputVar[i])
            return 0;
    }
    return 1;
}

#endif