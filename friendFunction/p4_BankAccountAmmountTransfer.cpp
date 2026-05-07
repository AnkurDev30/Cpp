/*
🎯 8. Bank Balance Transfer
Requirements:

Class:

account balance

Friend function should:

transfer amount between two objects
*/

#include<iostream>
class bankAccount
{
    private:
        int ammount;
    public:
        bankAccount(int amt):ammount(amt){};
        friend void bnkTransfer(bankAccount &b1, bankAccount &b2);
        friend void printAmt(bankAccount b1, bankAccount b2);
};
void bnkTransfer(bankAccount &b1, bankAccount &b2)
{
    int ammountTx=0;
    std::cout<<"how much ammount want to txfer\n";
    std::cin>>ammountTx;

    int obj;

    std::cout<<"select account b1 or b2\n1) b1 to b2 transfer\n2) b2 to b1 transfer\n";
    std::cin>>obj;

    if(obj ==1 )
    {
        if(b1.ammount > ammountTx)
        {
            b2.ammount = b2.ammount + ammountTx;
            b1.ammount = b1.ammount - ammountTx;
        }
        else
        {
            std::cout<<"not sufficiant ammount\n";
        }
    }
    else if(obj ==2 )
    {
        if(b2.ammount > ammountTx)
        {
            b1.ammount = b1.ammount + ammountTx;
            b2.ammount = b2.ammount - ammountTx;
        }
        else
        {
            std::cout<<"not sufficiant ammount\n";
        }
    }
    else
    {
        std::cout<<"wrong transfer option\n";
    }
    
}
void printAmt(bankAccount b1, bankAccount b2)
{
    std::cout<<"current ammount of b1 account = "<<b1.ammount<<std::endl;
    std::cout<<"current ammount of b2 account = "<<b2.ammount<<std::endl;
}

int main()
{
    int oppeningAccFOrB1,oppeningAccFOrB2;

    std::cout<<"enter opening ammount for b1 account\n";
    std::cin>>oppeningAccFOrB1;

    std::cout<<"enter opening ammount for b2 account\n";
    std::cin>>oppeningAccFOrB2;


    bankAccount b1(oppeningAccFOrB1),b2(oppeningAccFOrB2);

    bnkTransfer(b1,b2);
    printAmt(b1,b2);

}