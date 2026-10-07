#include<iostream>

struct Abc
{

    Abc()
    {
        std::cout<<"I am Abc construtor\n";
    }
    ~Abc()
    {
        std::cout<<"I am Abc deconstrutor\n";
    }
};
struct Efg: public Abc
{

    Efg()
    {
        std::cout<<"I am Efg construtor\n";
    }
    ~Efg()
    {
        std::cout<<"I am Efg deconstrutor\n";
    }
};

int main()
{
    Abc a1;//std::cout<<"I am Abc construtor\n";
    Efg e1;//std::cout<<"I am Abc construtor\n"; std::cout<<"I am efg construtor\n";

    int *p = new int[5];


    std::cout<<"enter data in array\n";
    for(int i=0;i<5;i++)
    {
        std::cin>>p[i];
    }
    for(int i=0;i<5;i++)
    {
        std::cout<<p[i]<<" ";
    }
    std::cout<<"\n";
    delete p;
}