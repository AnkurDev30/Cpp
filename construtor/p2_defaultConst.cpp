/*
🧱 1. Employee Details
Requirements:

Take from constructor:

employee name
salary
id

Display all details.
*/


#include<iostream>
class employeeDetails
{

    private:
        std::string name;
        float salary;
        int id;
    public:
        //default construtor.
        employeeDetails()
        {
            std::cout<<"enter name of employee\n";
            std::cin>>name;

            std::cout<<"enter salary"<<std::endl;
            std::cin>>salary;

            std::cout<<"enter ID\n";
            std::cin>>id;
        }
        void display()
        {
            std::cout<<"name :"<<name<<std::endl;
            std::cout<<"salary :"<<salary<<std::endl;
            std::cout<<"id :"<<id<<std::endl;
        }
};

int main()
{
    employeeDetails emp1;
    emp1.display();

    
}