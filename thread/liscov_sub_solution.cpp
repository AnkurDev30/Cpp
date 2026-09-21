#include<iostream>
class fly
{
    public:
        virtual void flyi()
        {
            std::cout<<"fly base\n";
        }
};

class sparrow :public fly
{
    public:
        void flyi()
        {
            std::cout<<"sparrow fly\n";
        }
};
class eat
{
    public:
        virtual void eats()
        {
            std::cout<<"eat\n";
        }
};
class panguin:public eat
{
    public:
        void eats()
        {
            std::cout<<"panguin can eat\n";

        }
};

int main()
{
    fly *f;
    eat *e;
    sparrow s1;
    panguin p1;

    f=&s1;
    e=&p1;

    f->flyi();
    e->eats();

}