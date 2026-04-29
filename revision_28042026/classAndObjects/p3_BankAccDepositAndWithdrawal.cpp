// Class BankAccount (deposit, withdraw)

#include<iostream>

class cBankAcc
{
    private:
       unsigned int ammount;
    public:
        void vAccoutOpen();
        void vDeposit();
        void vWithdrwal();
        void vDisplayBal();
};
void cBankAcc::vAccoutOpen()
{
    std::cout<<"enter opening balance"<<std::endl;
    std::cin>>ammount;
}
void cBankAcc::vDeposit()
{
    int depositAmmount;

    std::cout<<"enter deposit ammount"<<std::endl;
    std::cin>>depositAmmount;
    ammount = ammount+depositAmmount;
}
void cBankAcc::vWithdrwal()
{
    int withdrawAmm;
    if(ammount == 0 )
    {
        std::cout<<"zero balance please deposit some ammount"<<std::endl;
        return ;
    }
    std::cout<<"enter withdraw ammount"<<std::endl;
    std::cin>>withdrawAmm;
    ammount = ammount-withdrawAmm;
}
void cBankAcc::vDisplayBal()
{
    std::cout<<"account balance = "<<ammount<<std::endl;
}
int main()
{
    cBankAcc objAcc;
    int opt;

    do 
    {
        std::cout<<"select one option\n 1. deposit ammount\n 2. withdraw ammount\n 3. display balance\n 4. exit"<<std::endl;
        std::cin>>opt;
        if(opt == 1) objAcc.vDeposit();
        else if(opt == 2) objAcc.vWithdrwal();
        else if(opt == 3) objAcc.vDisplayBal();
        else return 0;
    }while(opt!=4);

    
}