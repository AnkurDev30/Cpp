//Implement runtime polymorphism using virtual functions.
#include<iostream>
class base 
{
    public:
        virtual void fun()
        {

        }
        virtual ~base()
        {
            std::cout<<"destructor\n";
        }
};

class child : public base
{
    public:
        void fun()
        {
            std::cout<<"hello\n";
        }
};
class child1 : public base
{
    public:
        void fun()
        {
            std::cout<<"hye\n";
        }
};
int main()
{
    base *p = new child();

    p->fun();

    delete p;
    p = nullptr;

    p = new child1();

    p->fun();

    delete
}