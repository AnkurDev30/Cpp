#include<iostream>

int main()
{
    int *p = new int(42);

    int *const q = p;

    delete p ;

    p = nullptr;

    std::cout<<(q==nullptr)<<std::endl;
}