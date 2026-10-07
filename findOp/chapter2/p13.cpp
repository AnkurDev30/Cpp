#include<iostream>
int a=10;
int main()
{
    int a=20;
    {
        int a=30;
        std::cout<<a<<::a<<::::a;//this is invalid operation :::: not any operator
    }
    return 0;
}