/*🧱 1. Generic Addition Function
Requirements:

Create function template:

sum()

Perform addition for:

int
float
double*/

#include<iostream>
template<typename t>
t funAdd(t a,t b)
{
    t c =a+b;
    return c;
}

int main()
{
    int a,b,x;
    float c,d,y;
    double e,f,z;

    x = funAdd(12,13);
    y = funAdd(3.87,8.54);
    z = funAdd(19.89,76.84);

    std::cout<<"x = "<<x<<std::endl;
    std::cout<<"y = "<<y<<std::endl;
    std::cout<<"z = "<<z<<std::endl;
}