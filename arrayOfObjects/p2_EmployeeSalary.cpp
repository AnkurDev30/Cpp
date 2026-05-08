/*---------------------------------------------
Problem 2 — Employee Salary

Class: Employee
Members: id, salary
Task:

Array of 4 employees

Calculate total salary

Find highest salary

Date : 20-02-2025
-----------------------------------------------*/
//!< Header file.
#include<iostream>

//!< define namespace.
namespace nEmployeeSalary
{
    //!< define class.
    class cEmployeeSalary
    {
        //!< private members.
        private:
            int id;
            int salary;
        public:
            //!< member function.
            void vGetInput(int i);
            void vDisplayData();
            int iGetSalary();
    };
    //!< funtion for taking employee salary and id.
    void cEmployeeSalary::vGetInput(int i)
    {
        std::cout<<"entry data for: "<<i<<std::endl;
        std::cout<<"enter id of employee "<<std::endl;
        std::cin>>id;
        std::cout<<"enter id of salary"<<std::endl;
        std::cin>>salary;
    }
    //!< display function
    void cEmployeeSalary:: vDisplayData()
    {
        std::cout<<"Id: "<<id<<" Salary: "<<salary<<std::endl;
    }
    //!< provide salary 
    int cEmployeeSalary::iGetSalary()
    {
        return salary;
    }
}
//!< main function 
int main()
{
    //!< object creation and local variable
    nEmployeeSalary::cEmployeeSalary objSalary[4];
    int totalSalary = 0;
    int maxSalary = 0;
    int var = 0;
    //!< get input.
    for(int i= 0;i<4;i++)
    {
        objSalary[i].vGetInput(i+1);
    }
    //!< display input.
    std::cout<<"display data:"<<std::endl;
    for(int i= 0;i<4;i++)
    {
        objSalary[i].vDisplayData();
    }
    //!< max salary and total salary logic.
    maxSalary = objSalary[0].iGetSalary();

    for(int i= 0;i<4;i++)
    {
        var = objSalary[i].iGetSalary();
        totalSalary+=var;
        if(maxSalary < var)
        maxSalary =var;
    }
    std::cout<<"max salary "<<maxSalary<<std::endl;
    std::cout<<"total salary "<<totalSalary<<std::endl;
    return 0;
}