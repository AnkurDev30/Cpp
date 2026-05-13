/*
15. Shape Area Calculator
Concepts:
pure virtual function
abstract class
*/
#include<iostream>
class shapeAreaCalc
{
    public:
         virtual void fun()=0;
};
class ractangleArea:public shapeAreaCalc
{
    public:
        void fun() override
        {
            int a,b;
            std::cout<<"enter length and width\n";
            std::cin>>a>>b;

            std::cout<<"result = "<<a*b<<std::endl;
        }
};
class circle:public shapeAreaCalc
{
    public:
        constexpr float pi 3.14;
        void fun() override
        {
            float red;
            std::cout<<"enter redies\n";
            std::cin>>red;

            std::cout<<"result = "<<(pi*red*red)<<std::endl;
        }
};
int main()
{
    ractangleArea s1;
    shapeAreaCalc *p;
    circle c1;

    p=&s1;
    p->fun();

    p=&c1;
    p->fun();

}