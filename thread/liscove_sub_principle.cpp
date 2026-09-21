//a child class should be available for valid replacement for parents.

#include<iostream>
class fly
{
    public:
        virtual void flyi()
        {
            std::cout<<"fly\n";
        }
};

class sparrow:public fly
{
    public:
        void flyi() override
        {
            std::cout<<"sparrow fly\n";
        }
};

class panguin:public fly
{
    public:
        void flyi()
        {
            throw std::runtime_error("Penguin cannot fly");
        }
};

int main()
{
    fly *f;
    sparrow s;
    panguin p;

    f=&s;
    f->flyi();

    f=&p;
    f->flyi();

}