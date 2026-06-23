//exception handling.

#include<iostream>

int main()
{
    int a;
    int b;
    

    std::cout<<"enter a and b\n";
    std::cin>>a>>b;

    try
    {
        if(b==0)
        {
            throw std::string("divide by zero not possible\n");
        }
    }
    catch(std::string msg)
    {
        std::cout<<msg<<std::endl;
    }
    int c=a/b;

    std::cout<<"c = "<<c<<std::endl;
}