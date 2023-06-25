#include"symbolTable.hpp"
#include<iostream>

using namespace std;

int main()
{
    symbolTable s;
    tokenInfo a, b;

    
    strcpy(a.tokenID,"aaa");
    a.value.intValue = 100;
    a.is_array = 0;
    a.is_const = 0;

    copyTokenInfo(b,a);
    cout << b.tokenID << endl;
    cout << a.tokenID << endl;
    strcpy(b.tokenID, "bbbb");
    b.value = a.value;
    cout << b.tokenID << endl;
    cout << a.tokenID << endl;
    s.insert(a,0);
    s.insert(b,1);
    s.dump();
}