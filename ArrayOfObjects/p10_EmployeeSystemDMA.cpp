/*---------------------------------------------
Problem 10 — Dynamic Employee System

Class: Employee
Members: id, salary

Task:

create dynamic array of employees

display employees with salary > 50000

Date : 21-02-2025


-----------------------------------------------*/
#include<iostream>
namespace nEmpSys
{
    class cEmpSys
    {
        private:
            int id;
            int salary;
        public:
            void setIdAndSalary()
            {
                std::cout<<"enter emp id and salary"<<std::endl;
                std::cin>>id>>salary;
            }
            void displayData(int empNo)
            {
                if(salary>50000)
                {
                    std::cout<<"emp no :"<<empNo+1<<" Id : "<<id<<" salary :"<<salary<<std::endl;
                }
            }
    };
}
int main()
{
    int EmpNo;
    std::cout<<"enter no of employee"<<std::endl;
    std::cin>>EmpNo;

    nEmpSys::cEmpSys *pObj;
    pObj = new nEmpSys::cEmpSys[EmpNo];

    for(int i=0;i<EmpNo;i++)
    {
        pObj[i].setIdAndSalary();
    }
    std::cout<<"display data"<<std::endl;
    for(int i=0;i<EmpNo;i++)
    {
        pObj[i].displayData(i);
    }
    delete[] pObj;
}