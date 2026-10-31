#include<iostream>

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
        if(b==5)
        {
            throw 1;
        }
        if(b==7)
        {
            throw 10.5f;
        }
        c = a/b;
        std::cout<<"result = "<<c<<std::endl;
    }
    catch (...)
    {
        std::cout<<"wrong b\n"<<std::endl;
    }
    
}