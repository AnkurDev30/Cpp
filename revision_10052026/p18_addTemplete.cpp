/**
🧱 TEMPLATE
18. Generic Add Function
Concepts:
function template.
*/
#include<iostream>
template <typename t>
t fun(t a,t b)
{
    return a+b;
}
int main()
{
    int a=7,b=9;
    int c=fun(a,b);
    std::cout<<"c = "<<c<<std::endl;

    float e=9.7,d = 7.9;
    float g = fun(e,d);
    std::cout<<"g = "<<g<<std::endl;
}