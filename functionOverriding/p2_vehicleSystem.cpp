/*
🧱 2. Vehicle Speed System
Requirements:

Base:

Vehicle -> speed()

Derived:

Car -> speed()
Bike -> speed()
*/
#include<iostream>
class vehicle 
{
    public:
        void speed()
        {
            std::cout<<"vehicle speed\n";
        }
};
class car:public vehicle 
{
    public:
        void speed()
        {
            std::cout<<"car speed\n";
        }
};
class bike:public vehicle 
{
    public:
        void speed()
        {
            std::cout<<"bike speed\n";
        }
};
int main()
{
    car c1;
    bike b1;
    c1.speed();
    b1.speed();
}