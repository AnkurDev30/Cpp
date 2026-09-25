/*
    14. Animal Sound System
Concepts:
overriding
virtual function
*/

#include<iostream>
class animalS
{
    public:
        virtual void fun()
        {
            std::cout<<"animal sound\n";
        }
};
class cat:public animalS
{
    public:
        void fun()
        {
             std::cout<<"cat sound\n";
        }
};
int main()
{
    animalS *p ;//= cat;
    cat d;

    p =&d;
    p->fun();
}