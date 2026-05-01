/*
🧱 1. Salary System

Design a function to calculate employee salary.

👉 Requirements:

Base salary is mandatory
Bonus should have a default value
Tax should have a default value
Allow user to override bonus and tax
*/

#include<iostream>
class SalaryCalculation
{
    public:
        int CalculateSalaryFunction(float baseSalary,int bonus=1000,int tax=300);
};
int SalaryCalculation::CalculateSalaryFunction(float baseSalary,int bonus,int tax)
{
    return (baseSalary+bonus)-tax;
}
int main()
{
    SalaryCalculation obj;
    int baseSalary;
    int bonus;
    int tax;
    int totalSalary;
    int opt;
    do {
        std::cout<<"enter base salary"<<std::endl;
        std::cin>>baseSalary;
        std::cout<<"enter bonus"<<std::endl;
        std::cin>>bonus;
        std::cout<<"enter tax"<<std::endl;
        std::cin>>tax;

        if(bonus <1000 )
        {
            totalSalary = obj.CalculateSalaryFunction(baseSalary);
        }
        else if(tax<300)
        {
            totalSalary = obj.CalculateSalaryFunction(baseSalary,bonus);
        }
        else
        {
            totalSalary = obj.CalculateSalaryFunction(baseSalary,bonus,tax);
        }
        std::cout<<"total salary = "<<totalSalary<<std::endl;

        
        std::cout<<"more employee press 1 for exit press 0"<<std::endl;
        std::cin>>opt;


    }while(opt==1);
}