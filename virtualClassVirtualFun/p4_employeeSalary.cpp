/*
🧱 3. Employee Salary System
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
        virtual void calculateSalary()
        {
            std::cout<<"base class\n";
        }
};
class manager:public emp 
{
    public:
         void calculateSalary()
        {
            std::cout<<"manager salary\n";
        }
};
class developer:public emp 
{
    public:
         void calculateSalary()
        {
            std::cout<<"developer salary\n";
        }
};
class tester:public emp 
{
    public:
         void calculateSalary()
        {
            std::cout<<"tester salary\n";
        }
};
int main()
{
    emp *p;
    manager m1 ;
    developer d1;
    tester t1;

    p=&m1;
    p->calculateSalary();

    p=&d1;
    p->calculateSalary();

    p=&t1;
    p->calculateSalary();
    
}