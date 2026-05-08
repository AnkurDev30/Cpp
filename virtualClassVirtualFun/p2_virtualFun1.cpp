/*
🧱 5. Shape Area Calculator
Requirements:

Base:

Shape -> area()

Derived:

Rectangle
Circle
Triangle

Each class:

own area formula
*/

#include<iostream>
class shape
{
    public:
    virtual void area(int a=0,int b=0,int c=0)
    {
        std::cout<<"area calc\n";
    }
};
class ractangle:public shape
{
    public:
     void area(int a=0,int b=0,int c=0)
    {
        int area = a*b;
        std::cout<<"ractangle area ="<<area<<std::endl;
    }
};
class circle:public shape
{
    public:
     void area(int r=0,int b=0,int c=0)
    {
        float area = (float)(3.14*r*r);
        std::cout<<"circle area ="<<area<<std::endl;
    }
};
class triangle:public shape
{
    public:
     void area(int a=0,int b=0,int c=0)
    {
        float area = (float)((a*b)/2);
        std::cout<<"tringle area ="<<area<<std::endl;
    }
};
int main()
{
    int l,w;
    std::cout<<"ractangle class area\nenter l and w\n";
    std::cin>>l>>w;
    shape *p;
    ractangle r1;
    p=&r1;
    p->area(l,w);

    std::cout<<"circle area\n";
    circle c1;
    p=&c1;
    int r;
    std::cout<<"enter radies\n";
    std::cin>>r;
    p->area(r);

    std::cout<<"triangle area"<<std::endl;
    int a,b;
    std::cout<<"triangle class area\nenter a and b\n";
    std::cin>>a>>b;
    triangle t1;
    p=&t1;
    p->area(a,b);
}