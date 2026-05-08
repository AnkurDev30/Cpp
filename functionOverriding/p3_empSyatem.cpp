/**
🧱 3. Employee Salary System
Requirements:

Base:

Employee -> calculateSalary()

Derived:

Manager
Developer
*/

#include<iostream>
class emp 
{
    public:
       void calculateSalary()
       {
            std::cout<<"emp salary\n";
       } 
};
class manager :public emp
{
    public:
       void calculateSalary()
       {
            std::cout<<"manager salary\n";
       } 
};
class developer :public emp
{
    public:
       void calculateSalary()
       {
            std::cout<<"developer salary\n";
       } 
};

int main()
{
    manager m1;
    developer d1;

    emp *p;
    p = &d1;
    p->calculateSalary();
}