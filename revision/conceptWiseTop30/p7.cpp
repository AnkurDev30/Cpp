//Demonstrate name hiding and resolve it using using Base::func

#include<iostream>

class base 
{
    public:
        void fun()
        {
            std::cout<<"hello\n";
        }
};
class derived : public base
{
    public:
        using base::fun;
        void fun(int x)
        {
            std::cout<<x<<std::endl;
        }
};
int main()
{
    derived d;
    d.fun();//give error
    d.fun(2);//compiled
}