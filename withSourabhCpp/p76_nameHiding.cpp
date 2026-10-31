/*
    name hinding is a issue 
    issue in inheritance
    derived class and base class both have same name of functions 
    and one of have diffrent/same argument.
*/

#include<iostream>

class base 
{

    public:
        void fun()
        {
            std::cout<<"hello\n";
        }
};
class derived :public base 
{

    public:
        using base::fun;//solution of name hinding.
        void fun(int a)
        {
            std::cout<<"int derived\n";
        }
        void fun(int a,float b)
        {
            std::cout<<"float derived\n";
        }
};

int main()
{

    derived d1;

    d1.fun(10);
    d1.fun(10,23.5);
    d1.fun();
}