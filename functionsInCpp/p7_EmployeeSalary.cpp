/**********************************************************************************

7. Employee salary comparison

Class: Employee
Members: salary
Function: highest(Employee) → return object

Date : 17 feb 2025
**********************************************************************************/

//!< header file.
#include<iostream>

//!< namespace defination.
namespace nEmployee
{
    //!< class defination.
    class cEmployee
    {
        //!< private data member.
        private:
            int salary;
           // int higherSalary;
        public:
            //!< default constructor.
            cEmployee() : salary(0){}
            //!< parameterized constructor.
            explicit cEmployee(int s):salary(s){}
            //!< display output fun
            void displayHigestSalary()const;
            //!< compare funtcion
            cEmployee compareSalaryFun(cEmployee obj);
    };
    //!< display output fun
    void cEmployee::displayHigestSalary()const
    {
        std::cout<<"higher salary = "<<salary<<std::endl;
    }
    //!< compare funtcion
    cEmployee cEmployee::compareSalaryFun(cEmployee obj)
    {

            //!< if current object have less salary
            if(obj.salary>this->salary)
            {
                return obj;
            }
            else
            {//!< if current object have high salary
                return *this;
            }

    }
}
int salaryInput(std::string empName)
{
    int sal =0;

        std::cout<<"enter "<<empName<<" salary"<<std::endl;
        std::cin>>sal;

    return sal;
}
//!< main function.
int main()
{
    //!< local object.
    nEmployee::cEmployee highSalFindObj;
    //!< local vara for salary input
    int salInput = salaryInput("Emp 1");

    //!< object creation.
    nEmployee::cEmployee firstEmp(salInput);

    //!< input salary for second employee
    salInput = salaryInput("Emp 2");

    //!< object 2 creation
    nEmployee::cEmployee secondEmp(salInput);

    //!< compare salary of 2 employee.
    highSalFindObj = secondEmp.compareSalaryFun(firstEmp);

    //!< display salary.
    highSalFindObj.displayHigestSalary();

}