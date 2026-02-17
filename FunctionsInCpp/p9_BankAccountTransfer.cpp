/**********************************************************************************

9. Bank account transfer simulation

Class: Account
Members: balance
Function: transfer(Account) → return object

Date : 17 feb 2025
**********************************************************************************/
//!< header file.
#include<iostream>
#include<string>
//!< namespace defination.
namespace nBankAccountTransfer
{
    class cBankAccountTransfer
    {
        private:
            int bankAccountAmount;
        public:
            explicit cBankAccountTransfer(int ammount):bankAccountAmount(ammount){}
            void displayBankBalance(std::string accountName)const 
            {
                std::cout<<"account balance of "<<accountName<<" is :"<<bankAccountAmount<<std::endl;
            }
            cBankAccountTransfer balanceTransfer(cBankAccountTransfer &obj)
            {
                //!< transfer ammount
                this->bankAccountAmount = this->bankAccountAmount + obj.bankAccountAmount;
                obj.bankAccountAmount = 0;
                return *this;
            }
    };
}
//!< enter ammount , deposit money in account.
int depositAmmountFun(std::string name)
{
    int ammount = 0;
    std::cout<<"enter ammount for "<<name<<std::endl;
    std::cin>>ammount;
    return ammount;
}
//!< main function.
int main()
{
    //!< take input ammount for first account.
    int ammountTemp = depositAmmountFun("primary account");
    //!< first object creation
    nBankAccountTransfer::cBankAccountTransfer account1(ammountTemp);

    //!< take input ammount for second account.
    ammountTemp = depositAmmountFun("second account");
    //!< second object creation.
    nBankAccountTransfer::cBankAccountTransfer account2(ammountTemp);

    //!< transfer account 1 ammount -> account 2.
    account2.balanceTransfer(account1);

    //!< display account 2 balance.
    account2.displayBankBalance("account 2");

    //!< display account 1 balance.
    account1.displayBankBalance("account 1");
}