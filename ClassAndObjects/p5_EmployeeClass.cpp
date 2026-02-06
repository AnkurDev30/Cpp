/*
5. Employee Class

Create a class Employee with:

id

name

salary

Member functions:

readData()

displayData()

annualSalary()
*/
#include<iostream>
#include<string>
namespace nEmployeeClass
{
    class cEmployeeClass
    {
        private:
            int id;
            std::string name;
            int salary;
        public:
        explicit cEmployeeClass(int id1,std::string name1,int sal):id(id1),name(name1),salary(sal){}
            //void readData();
            void displayData();
            void annualSalary();
    };
}

void nEmployeeClass::cEmployeeClass ::displayData()
{
    std::cout<<"emplyee name "<<name<<std::endl;
    std::cout<<"emplyee id "<<id<<std::endl;
    std::cout<<"emplyee salary "<<salary<<std::endl;    
}
void nEmployeeClass::cEmployeeClass ::annualSalary()
{
    std::cout<<" employee anual salary = "<<12*salary<<std::endl;
}

int main()
{
    nEmployeeClass::cEmployeeClass objEmp(1201,"Akta",7900);
    objEmp.displayData();
    objEmp.annualSalary();
}