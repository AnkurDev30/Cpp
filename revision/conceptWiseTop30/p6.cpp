//Demonstrate function overloading vs function overriding

#include<iostream>

class base 
{
    public:
        virtual void fun()
        {
            std::cout<<"base\n";
        }
       
};
class derived :public base
{
    public:
        void fun() override
        {
            std::cout<<"derived\n";
        }
        void fun( float f,int x)
        {
            std::cout<<"float fun = "<<f<<std::endl;
        }
        void fun(int x)
        {
            std::cout<<"funtion overloading  = "<<x<<std::endl;
        }
};
int main()
{
    base *b = new derived();
    derived d;
    d.fun(10);
    d.fun(100);
    d.fun(100,30);
    b->fun();
}