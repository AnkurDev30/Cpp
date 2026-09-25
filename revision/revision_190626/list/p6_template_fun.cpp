#include<iostream>

template<typename t,typename p>
 t funcy( t a, p b)
{
    return a+b;
}

int main()
{
    int a=20;
    int b=30;
    int d =funcy(a,b);
    std::cout<<d<<std::endl;

    float a1=20.3;
    float b1=30.9;
    float d1 =funcy(a1,b1);
    std::cout<<d1<<std::endl;
}