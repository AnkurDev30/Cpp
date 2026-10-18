/*
1. virtual funtion : a funtion have keyword virtual
inheritance mandatory
derived class have same name funtion 

so at runtime base calss poinetr override derived class funtion

and in virtual function we can redefine same name function with same argument same 
return type in derived class.


*/

#include<iostream>

class base 
{
    public:
        virtual void fun()
        {
            std::cout<<"hello\n";
        }
};
class derived : public base
{
      public:
        void fun()
        {
            std::cout<<"hye\n";
        }  
};

int main()
{
    derived d1;
    d1.fun();

    base *p =new derived();

    p->fun();
}