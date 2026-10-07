//dynamic memory allocation
#include<iostream>

int main()
{

    int *p = new int();

    std::cout<<"enter data\n";
    std::cin>>*p;

    std::cout<<"value of P = "<<*p<<std::endl;

    delete p;//memory leak , memory waste , program exceution slow 
}