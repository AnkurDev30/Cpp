#include<iostream>

class base 
{
    public:
        virtual void swan()
        {
            std::cout<<"sawan live in himalaya\n";
        }
};
class derived : public base
{
    public:
        derived ()
        {
            base *p =this;
            p->swan();
        }
        void swan()
        {
            std::cout<<"sawan in rainy weather\n";
        }
};

int main()
{
    derived d1;
}