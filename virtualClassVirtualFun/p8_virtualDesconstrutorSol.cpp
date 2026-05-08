//virtual destrutor issue 

#include<iostream>
class B
{
    public:
        B()
        {
            std::cout<<"i am  B constructor\n";
        }
        virtual ~ B()
        {
            std::cout<<"i am B desconstructor\n";
        }
};
class D:public B
{
    public:
        D()
        {
            std::cout<<"i am D constructor\n";
        }
        ~D()
        {
            std::cout<<"i am D desconstructor\n";
        }
};
int main()
{
    //D d1;
    B *p =new D;//d1;
    delete p;
}