/*
🧱 2. Employee Salary System
Requirements:

Base:

Employee -> calculateSalary()

Derived:

Manager
Developer
Tester

*/
#include<iostream>
class emp 
{
    public:
        virtual void fun() = 0;
};
class Manager:public emp 
{
    public:
         void fun() 
         {
            std::cout<<"manager sal\n";
         }
};
class Developer:public emp 
{
    public:
        void fun() 
         {
            std::cout<<"Developer sal\n";
         }
};
class Tester:public emp 
{
    public:
        void fun() 
         {
            std::cout<<"Tester sal\n";
         }
};

int main()
{
    Manager   m1;
    Developer d1;
    Tester t1;
    m1.fun();
    d1.fun();
    t1.fun();
}