/*
17. Vehicle Information System
Concepts:
multilevel inheritance
overriding
*/
#include<iostream>
class vehicle
{
    public:
        virtual void show()
        {
            std::cout<<"vehicle show\n";
        }
};
class car : public vehicle
{
    public:
         void show()
        {
            std::cout<<"car show\n";
        }
};
class bike :   public car
{
    public:
        virtual void show()
        {
            std::cout<<"bike show\n";
        }
};
int main()
{
    vehicle *v;
    car c;
    bike b;
   // v=&c;
   // v->show();

    v=&b;
    v->show();
}