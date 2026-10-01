#include<iostream>

int main()
{

    int a;
    int b;

    std::cout<<"ente a and b\n";
    std::cin>>a>>b;
    try{
        if(b==0)
        {
            throw "Error\n";
        }
        int result = a/b;
        std::cout<<result<<std::endl;
    }catch(const char*msg)
    {
        std::cout<<msg<<std::endl;
    }
}