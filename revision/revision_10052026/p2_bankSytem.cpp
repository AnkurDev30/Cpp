/*
2. Bank Account System
Concepts:
private/public
deposit/withdraw
validation
*/
#include<iostream>
#include<string>

class bankSystem 
{
    private:
        struct bankWork
        {
            int ammountSaving;
        };
    public:
        bankWork *bnk;
        bankSystem()
        {
            bnk = new bankWork;
        }
        ~bankSystem()
        {
            delete bnk;
        }
        void depositAmmount()
        {
            int ammount;
            std::cout<<"enter deposit ammount\n";
            std::cin>>ammount;
            bnk->ammountSaving += ammount;

            display();

        }
        void withDrawAmmount()
        {
            int ammount;
            std::cout<<"enter withdraw ammount\n";
            std::cin>>ammount;
            if( bnk->ammountSaving>=ammount)
            bnk->ammountSaving -= ammount;
            else
                std::cout<<"not sufficiant balance\n";

            display();

        }
        void display()
        {
            std::cout<<"current balace = "<<bnk->ammountSaving<<std::endl;
        }
    
};
int main()
{
    int noOfAcc;
    std::cout<<"enter number of acc\n";
    std::cin>>noOfAcc;

    bankSystem *p = new bankSystem[noOfAcc];

    for(int i=0;i<noOfAcc;i++)
    {
        std::cout<<"enter deposit ammount for each account\n";
        p[i].depositAmmount();
    }
    for(int i=0;i<noOfAcc;i++)
    {
        std::cout<<"enter withdraw  for each account\n";
        p[i].withDrawAmmount();
    }

    delete[] p;
}