#include"symbolTable.hpp"
#include<iostream>

using namespace std;

int main()
{
    symbolTable s;
    tokenInfo a, b;
    // strcpy(a.tokenID, "aaaaa");
    a.tokenID = "aaa";
    b = a;
    cout << b.tokenID << endl;
    cout << a.tokenID << endl;
    a.tokenID = "bbbbb";
    cout << b.tokenID << endl;
    cout << a.tokenID << endl;
    s.insert(a,0);
    s.insert(b,1);
    s.dump();
}