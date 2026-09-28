//1. Find Maximum ⭐
#include<iostream>
template<typename t>

t findMax(t a,t b,t c)
{
    t result =0;
    if(a>b && a>c)
    {
        result =a;
    }else if(b>c)
    {
        result =b;
    }
    else
    {
        result =c;
    }
    return result;
}
int main()
{
    int a=20,b=30,c=2;
    int d=findMax(a,b,c);
    std::cout<<d<<std::endl;

    float a1 = 20.2,b2=20.3,c2=2.2;

    float e=findMax(a1,b2,c2);
    std::cout<<e<<std::endl;   
}