//30 sep 2026.

#include<iostream>
class B 
{
    public:
        B ()
        {
            std::cout<<"base class construtor\n";
        }
        virtual ~B()
        {
            std::cout<<"base class Deconstructor\n";
        }
};
class D:public B
{
    public:
        D ()
        {
            std::cout<<"child class construtor\n";
        }
        ~D()
        {
            std::cout<<"child class Deconstructor\n";
        }
};

int main()
{
    //D d;
    B *p=new D();
    delete p;
}