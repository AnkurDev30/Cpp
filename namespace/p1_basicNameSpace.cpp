/*
1. Basic namespace
Create a namespace Math containing:
int add(int a, int b);
int subtract(int a, int b);

Call both functions from main() using:
Math::add(...)
Math::subtract(...)

Practice: namespace declaration and scope resolution ::.
*/

#include<iostream>

namespace Math 
{
    int add(int a,int b)
    {
        return a+b;
    }
    int subtract(int a,int b)
    {
        return a-b;
    }
}

int main()
{
    int f1,f2;
    int result ;
    std::cout<<"enter 2 numbers\n";
    std::cin>>f1>>f2;

    result = Math::add(f1,f2);
    std::cout<<"addition : "<<result<<std::endl;

    result = Math::subtract(f1,f2);
    std::cout<<"subtract : "<<result<<std::endl;  

    return 0;
}