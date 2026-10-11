#include<iostream>

int main()
{
    int a=10;
    int *p=&a;
    int*& ref = p;

    std::cout<<*ref<<*p<<std::endl;
}