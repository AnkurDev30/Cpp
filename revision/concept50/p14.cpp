#include<iostream>

class base 
{
    public:
        int x =10;
        virtual void fun()
        {
            std::cout<<"base class = "<<x<<std::endl;
        }
};

class derived : public base
{
    public:
        int x =10;
         void fun()
        {
            std::cout<<"derived class = "<<x<<std::endl;
        }       
};

int main()
{
    derived d;
    base &b = d;

    b.fun();
}