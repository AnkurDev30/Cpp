/*
Requirements:

Base class:

Animal -> sound()

Derived:

Dog
Cat
Cow
*/

#include<iostream>

class animal 
{
    public:
        virtual void fun()=0;
};
class dog:public animal
{
    public:
        void fun()
        {
            std::cout<<"dog sound\n";
        }
};
class cat:public animal
{
    public:
        void fun()
        {
            std::cout<<"cat sound\n";
        }
};
class cow:public animal
{
    public:
        void fun()
        {
            std::cout<<"cow sound\n";
        }
};

int main()
{
    class dog d1;
    class cat c1;
    class cow c2;
    d1.fun();
    c1.fun();
    c2.fun();
}