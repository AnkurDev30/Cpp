/*
🎯 3. Bank Account Manager
Requirements:

Class bankAccount

private:
balance
account number

Friend class BankManager

deposit amount
withdraw amount
display balance
*/

#include<iostream>
class bankAccount
{
    private:
        int balance;
        int accountNum;
    public:
        void getData()
        {
            std::cout<<"enter acc number\n";
            std::cin>>accountNum;

            std::cout<<"enter balance\n";
            std::cin>>balance;
        }
        friend class bankManager;
};
class bankManager
{
    private:
    public:

    void depositAmmount(bankAccount &b1);
    void withdrawAmmount(bankAccount &b1);
    void displayAmmount(bankAccount b1);
};
void bankManager::depositAmmount(bankAccount &b1)
{
    int depositAmmount;
    std::cout<<"enter deposit ammount\n";
    std::cin>>depositAmmount;

    b1.balance = b1.balance+depositAmmount;
    displayAmmount(b1);
}
void bankManager::withdrawAmmount(bankAccount &b1)
{
    int withDrawAmmountVar;
    std::cout<<"enter withdraw ammount\n";
    std::cin>>withDrawAmmountVar;

    b1.balance = b1.balance - withDrawAmmountVar;
    displayAmmount(b1);
}
void bankManager::displayAmmount(bankAccount b1)
{
    std::cout<<"current balance = "<<b1.balance<<std::endl;
}

int main()
{
    bankAccount b1;
    b1.getData();
    bankManager b2;
    std::cout<<"select option :\n1-> deposit ammount\n2-> withdraw ammount\n3-> display balance\n";
    int opt=0;
    std::cin>>opt;
    if(opt==1)
        b2.depositAmmount(b1);
    else if(opt==2)
        b2.withdrawAmmount(b1);
    else if(opt ==3)
        b2.displayAmmount(b1);

    return 0;
}