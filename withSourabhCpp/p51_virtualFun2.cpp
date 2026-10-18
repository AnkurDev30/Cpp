#include<iostream>

class base 
{
    public:
        virtual void fun()
        {
            std::cout<<"fun base\n";
        }
};
class petrol: public base
{
    public:
         void fun()
        {
            std::cout<<"petrol class\n";
        }    
};
class electric: public base
{
    public:
         void fun()
        {
            std::cout<<"electric class\n";
        }    
};
int main()
{
    base *p1 = new petrol();
    p1->fun();
    p1=new electric();
    p1->fun();
    delete p1;
}