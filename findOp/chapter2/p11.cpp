#include<iostream>
using namespace std;
int main()
{
    char *p ="hello";
    p="Hi";
    p[0]='g';//give error
    *p='g'//give error
    cout<<p<<endl;
}