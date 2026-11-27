#include<iostream>

class base
{
    public:
        void fun()
        {
            std::cout<<"base\n";
        }
};
class A:virtual public base
{
    public:
        void fun1()
        {
            std::cout<<"A\n";
        }
};
class B:virtual public base
{
    public:
        void fun2()
        {
            std::cout<<"B\n";
        }
};
class C:public B, public A
{
    public:
        void fun3()
        {
            std::cout<<"C\n";
        }
};

int main()
{
    C c1;
    c1.fun3();
    c1.fun2();
    c1.fun1();
    c1.fun();
}