#include<iostream>


template <typename t1,typename t2>

t1 fun(t1 a,t2 b)
{
    t1 var  = a+ static_cast<t1>(b);
    return var;
}

int main()
{
    int a=1000;
    float b= 2000.89f;

    int c  = fun(a,b);

    std::cout<<"result = "<<c<<std::endl;

    //std::cout<<a<<b<<std::endl;
    float d = fun(b,a);
    std::cout<<"result2 = "<<d<<std::endl;
}