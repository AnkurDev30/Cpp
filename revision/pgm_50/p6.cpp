//1. Dynamic memory allocation for a single variable

#include<iostream>

int main()
{

    int *p = nullptr;

    p = new int ();

    std::cout<<"enter data\n";
    std::cin>>*p;

    std::cout<<"output : "<<*p<<std::endl;

    delete p;
}