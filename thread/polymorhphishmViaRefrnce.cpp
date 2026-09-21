#include<iostream>
class poly
{
    public:
        virtual void start() const =0;
        virtual ~poly(){};
};
class A:public poly
{
    public:
        void start() const
        {
            std::cout<<"A\n";
        }
};
class B:public poly
{
    public:
        void start() const
        {
            std::cout<<"B\n";
        }
};
int main()
{
    const poly& p=A();
    p.start();
    const poly& p2=B();
    p2.start();
}