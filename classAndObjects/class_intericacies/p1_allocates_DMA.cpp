#include<iostream>

int main()
{
    int *p=new int();
    char *c = new char();
    float *f = new float();

    *p=12;
    *c = 'A';
    *f=3.14;

    std::cout<<*p<<"\n";
    std::cout<<*c<<"\n";
    std::cout<<*f<<"\n";

    delete p;
    delete c;
    delete f;
}