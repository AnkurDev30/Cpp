//Demonstrate name hiding and resolve it using using Base::func.


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
        using base :: fun;
        void fun(int x)
        {
            std::cout<<"from derived\n";
        }
};


int main()
{
    derived d1;

    d1.fun(1);
    d1.fun();
}
