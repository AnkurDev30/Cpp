/*---------------------------------------------
Problem 5 — Bank Account

Class: Account
Members: balance
Task:

Array of accounts

Deposit into each

Find total balance

Date : 20-02-2025
-----------------------------------------------*/

//!< header files
#include<iostream>

//!< namespace defination.
namespace nBankAccount
{
    //!< class defination.
    class cBankAccount
    {
        //!< private data members.
        private:
            int balance;
        public:
            //!< taking inputs.
            void GetData(int i)
            {
                std::cout<<"enter opening ammount for account no : "<<i+1<<std::endl;
                std::cin>>balance;
            }
            //!< Display balance function.
            void DisplayBalance(int i)
            {
                std::cout<<"bank balance of account number "<<i+1<<" is : "<<balance<<std::endl;
            }
            //!< Deposit ammount.
            void DepositAmmount(int ammount)
            {
                balance = balance + ammount;
            }
            //!< return balance;
            int getBalance()
            {
                return balance;
            }
    };

}
int main()
{
    //!< local variables for number of acc
    int Accounts = 0;
    int DepositAmount =0;
    int findTotal = 0;
    //!< taking inputs
    std::cout<<"enter number of acc"<<std::endl;
    std::cin>>Accounts;

    //!< account declaraion 
    nBankAccount::cBankAccount  obj[Accounts];

    //!< initialize account or opening account balance
    for(int i=0;i<Accounts;i++)
    {
        obj[i].GetData(i);
    }
    //!< display balance
    for(int i=0;i<Accounts;i++)
    {
        obj[i].DisplayBalance(i);
    }

    //!< deposit ammount 
    for(int i=0;i<Accounts;i++)
    {
        std::cout<<"enter deposit ammount for acc number: "<<i+1<<std::endl;
        std::cin>>DepositAmount;
        obj[i].DepositAmmount(DepositAmount);
    }

    //!< display balance after deposit.
    std::cout<<"_____________________________"<<std::endl<<std::endl;
    std::cout<<"display balnce after deposit"<<std::endl;
    std::cout<<"_____________________________"<<std::endl;
    for(int i=0;i<Accounts;i++)
    {
        obj[i].DisplayBalance(i);
        findTotal += obj[i].getBalance();
    }
    //!< display total  balance .
    std::cout<<"_____________________________"<<std::endl<<std::endl;
    std::cout<<"display total ammount"<<std::endl;
    std::cout<<"_____________________________"<<std::endl;
    std::cout<<"display total balance = "<<findTotal<<std::endl;
}