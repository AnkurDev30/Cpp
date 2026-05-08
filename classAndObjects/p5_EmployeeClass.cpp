/******************************************************************************************
Employee Class

Create a class Employee with:

id

name

salary

Member functions:

readData()

displayData()

annualSalary()
/**************************************************************************************** */

//!< header files
#include<iostream>
#include<string>

//!< namespace defination
namespace nEmployeeClass
{
    //!< class defination
    class cEmployeeClass
    {
        private:
        //!< data members
            int id;
            std::string name;
            int salary;
        public:
        //!< member functions and constrution
        explicit cEmployeeClass(int id1,std::string name1,int sal):id(id1),name(name1),salary(sal){}
            void displayData();
            void annualSalary();
    };
}
//!< displayData : display details of employee
void nEmployeeClass::cEmployeeClass ::displayData()
{
    std::cout<<"emplyee name "<<name<<std::endl;
    std::cout<<"emplyee id "<<id<<std::endl;
    std::cout<<"emplyee salary "<<salary<<std::endl;    
}
//!< annualSalary : anual salary calculation
void nEmployeeClass::cEmployeeClass ::annualSalary()
{
    std::cout<<" employee anual salary = "<<12*salary<<std::endl;
}
//!< main function calling
int main()
{
    nEmployeeClass::cEmployeeClass objEmp(1201,"Akta",7900);
    objEmp.displayData();
    objEmp.annualSalary();
}