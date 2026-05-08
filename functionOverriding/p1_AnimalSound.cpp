/*
🧱 1. Animal Sound System
Requirements:

Base class:

Animal -> sound()

Derived classes:

Dog -> sound()
Cat -> sound()

Override:

sound()
*/

#include<iostream>
class animal 
{
    public:
        void sound()
        {
            std::cout<<"animal sound\n";
        }
};
class dog:public animal 
{
    public:
        void sound()
        {
            std::cout<<"dog sound\n";
        }
};
class cat:public animal 
{
    public:
        void sound()
        {
            std::cout<<"cat sound\n";
        }
};
int main()
{
    dog d1;
    cat c1;
    c1.sound();
    d1.sound();
}
