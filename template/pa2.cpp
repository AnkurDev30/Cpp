//Swap Two Values ⭐⭐

#include<iostream>

template <typename t>

void fun(t &a,t &b)
{
    t temp = a;
    a=b;
    b=temp;
}
int main()
{
    {
    int a=3,b=5;
    std::cout<<"before "<<a<<" "<<b<<std::endl;
    fun(a,b);
    std::cout<<"after "<<a<<" "<<b<<std::endl;
    }
    {
    float a=3.5,b=5.8;
    std::cout<<"before "<<a<<" "<<b<<std::endl;
    fun(a,b);
    std::cout<<"after "<<a<<" "<<b<<std::endl;
    }
}