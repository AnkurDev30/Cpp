/*
exception handling : - EH is nothing but handling the run time error.

try :- handle the runtime operation
throw:- send error
catch:- what should do if runtime error occer.
*/

#include<iostream>
void helloFun()
{
    while(1)
    {
        std::cout<<"hello\n";
    }
}
int main()
{

    int a,b,c;

    std::cout<<"divide operations:- \nenter first num\n";
    std::cin>>a;
    std::cout<<"enter second num\n";
    std::cin>>b;

    try 
    {
        if(b==0)
        {
            throw "Not devided by zero\n";
        }
        c = a/b;
        std::cout<<"result = "<<c<<std::endl;
    }
    catch (const char *s)
    {
        std::cout<<s<<std::endl;
        helloFun();
    }

    
}