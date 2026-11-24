//Demonstrate function overloading using different parameter types.

#include<iostream>

void fun(int a,int b,float c)
{
    std::cout<<"total = "<<a+b+c<<std::endl;
}

void fun(float a,float b, float c, float d)
{
    std::cout<<"total f= "<<a+b+c+d<<std::endl;
}

int main()
{
    fun(10,11,12);

    fun(1.2,1.4,1.6,1.8);
}