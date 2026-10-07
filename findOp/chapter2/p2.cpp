#include<iostream>
using namespace std;

int main()
{

    char *p="hello";
    char*q =p;

    cout<<p<<endl<<q<<endl;//hello hello
    q="goodbye";
    cout<<p<<endl<<q<<endl;//hello goodbye
}