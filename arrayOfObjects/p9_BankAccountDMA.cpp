/*---------------------------------------------
Problem 9 — Dynamic Bank Accounts

Class: Account

Task:

allocate accounts dynamically

find maximum balance

Date : 21-02-2025


-----------------------------------------------*/

#include<iostream>

namespace nBankAccount
{
    class cBankAccount
    {
        private:
            int AccountBalance;
        public:
            void setAccountOpeningAmmount(int i)
            {
                std::cout<<"enter account opening balance for account number:"<<i+1<<std::endl;
                std::cin>>AccountBalance;
            }
            int getAccountBalance()
            {
                return AccountBalance;
            }
            void displayBalance(int i)
            {
                std::cout<<"Account balce of "<<i+1<<" acc number is : "<<getAccountBalance()<<std::endl;
            }
    };
}
int main()
{
    int noOfAccounts = 0;
    int maxBalance = 0;
    std::cout<<"enter no of accounts "<<std::endl;
    std::cin>>noOfAccounts;

    nBankAccount::cBankAccount *pObj;

    pObj = new nBankAccount::cBankAccount[noOfAccounts];

    for(int i=0;i<noOfAccounts;i++)
    {
        pObj[i].setAccountOpeningAmmount(i);
    }
    std::cout<<"display balance :"<<std::endl;

    for(int i=0;i<noOfAccounts;i++)
    {
        pObj[i].displayBalance(i);
    }
    maxBalance = pObj[0].getAccountBalance();
    for(int i=0;i<noOfAccounts;i++)
    {
        if(maxBalance < pObj[i].getAccountBalance())
        {
            maxBalance = pObj[i].getAccountBalance();
        }
    }

    std::cout<<"max balance = "<<maxBalance<<std::endl;
    delete[] pObj;
    return 0;
}