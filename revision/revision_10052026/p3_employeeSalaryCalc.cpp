/*
3. Employee Salary Calculator
Concepts:
constructor
parameterized constructor
*/

#include<iostream>
class employee 
{
    private:
        float salary;
        
        float basic(float CTC)
        {
            return ((CTC*25.0)/100.0);
        }
        float HRA(float CTC)
        {
            return ((CTC*50.0)/100.0);
        }
        float PF(float CTC)
        {
            return ((CTC*12.0)/100.0);
        }
        float Tp(float CTC)
        {
            return ((CTC*4.0)/100.0);
        }
        float Gr(float CTC)
        {
            return ((CTC*9.0)/100.0);
        }
    public:
        employee(float totalSalry)
        {
            salary = totalSalry;
        }
        void displaySalaryCmponentWise();
};
void employee::displaySalaryCmponentWise()
{
    std::cout<<"----------------------------\n";
    std::cout<<"Employee salary breakdown\n";
    std::cout<<"----------------------------\n";
    std::cout<<"Basic                : "<<basic(salary) <<std::endl;
    std::cout<<"HRA                  : "<<HRA(salary)   <<std::endl;
    std::cout<<"Telephone Allowence  : "<<Tp(salary)    <<std::endl;
    std::cout<<"PF                   : "<<PF(salary)    <<std::endl;
    std::cout<<"Graduity             : "<<Gr(salary)    <<std::endl;
    std::cout<<"----------------------------\n"         <<std::endl;
    std::cout<<"Total                : "<<salary<<std::endl;
    std::cout<<"----------------------------\n";
}
int main()
{
    float salary;
    std::cout<<"enter salary\n";
    std::cin>>salary;
    employee e(salary);
    e.displaySalaryCmponentWise();
}