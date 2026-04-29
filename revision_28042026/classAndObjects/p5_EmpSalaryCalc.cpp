// Class Employee with salary calculation

#include<iostream>

class cEmpSalary
{
    private:
        unsigned int salary;
    public:
        cEmpSalary(int x):salary(x){};
        void displaySalary()
        {
            std::cout<<"basic     = "<<((salary*50)/100)<<std::endl;
            std::cout<<"hra       = "<<((salary*14)/100)<<std::endl;
            std::cout<<"allowence = "<<((salary*24)/100)<<std::endl;
            std::cout<<"pf        = "<<((salary*12)/100)<<std::endl;
        }
        ~cEmpSalary();
};
int main()
{
    
    int CTC;
    std::cout<<"enter salary"<<std::endl;
    std::cin>>CTC;
    cEmpSalary objEmp(CTC);
    objEmp.displaySalary();
    return 0;
}