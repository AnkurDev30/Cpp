//Virtual Function
#include<iostream>
class base
{
    public:
    virtual void display()
    {
        std::cout<<"base class fun\n";
    }
};
class d1:public base
{
    public:
    void display()
    {
        std::cout<<"d1 class fun\n";
    }
};
class d2:public base
{
    public:
    void display()
    {
        std::cout<<"d2 class fun\n";
    }
};

int main()
{
    d1 d;
    d2 d2d;
    base *b1=&d;
    b1->display();

    b1=&d2d;
    b1->display();
}