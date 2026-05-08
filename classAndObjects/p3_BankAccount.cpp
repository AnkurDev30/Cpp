
/*****************************************************************************************
Create a class BankAccount with:

account number

balance

Member functions:

deposit()

withdraw()

displayBalance()
*****************************************************************************************/

//!< header files
#include<iostream>

//!< namespace defination
namespace nBankAccount
{
    //!< class defination
    class cBankAccount
    {
        //!< data members
        private:
            unsigned int iBankAcc;
            unsigned int iBankBalance;
        public:
        //!< member function
            void vDeposit();
            void vWithdraw();
            void vDisplayBalance();
    };
}

//!< bank deposit function.
void nBankAccount::cBankAccount::vDeposit()
{
    unsigned iRupees;
    std::cout<<"enter deposit ammount"<<std::endl;
    std::cin>>iRupees;
    if(iRupees>0)
    {
        iBankBalance = iBankBalance+iRupees;
    }
    else 
    {
        std::cout<<"enter ammount more than 0 rupees"<<std::endl;
    }

}
//!< bank withdraw function.
void nBankAccount::cBankAccount::vWithdraw()
{
    if(iBankBalance!=0)
    {
        unsigned iRupees;
        std::cout<<"enter withdraw ammount"<<std::endl;
        std::cin>>iRupees;
        if(iBankBalance>iRupees)
        {
            iBankBalance = iBankBalance-iRupees;
        }
        else
        {
            std::cout<<"withdraw more than balance"<<std::endl;
        }
    }
}
//!< display balance function.
void nBankAccount::cBankAccount::vDisplayBalance()
{
    std::cout<<"available balance = "<<iBankBalance<<std::endl;
}

//!< main calling function.
int main()
{
    nBankAccount::cBankAccount objBankAcc;
    objBankAcc.vDeposit();
    objBankAcc.vWithdraw();
    objBankAcc.vDisplayBalance();
}