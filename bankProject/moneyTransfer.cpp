//moneyTransfer.cpp
#include"moneyTransfer.h"
#include"AppMain.h"
void moneyTransN::moneyTransC::moneyTransferFun()
{
    generalOperationN::generalOperationC genObj;
    fileHandlingN::fileHandlingC fileObj;
    bankingOperationN::bankingOperationC bankObj;
    std::vector<accountDetailsN::accountDetailsC> accVect;

    genObj.clearScreen();
    genObj.welcomeBank();
    
    std::cout<<"Money Transfer Section\n";

    unsigned int accountNumberS = 0;
    unsigned int accountNumberR = 0;
    int ammount = 0;
    int index1;
    int index2;
    int balanceR;
    int balanceS;
    std::cout<<"Enter Sender Account Number : "<<std::endl;
    std::cin>>accountNumberS;
    genObj.cinIgnore();
    bool boStatus = fileObj.readFullData(accVect);
    if(boStatus == true)
    {
        std::cout<<"Read done\n";
    }
    else
    {
        std::cout<<"Read Fail\n";
        return;
    }
    
    //debug.
    for(int i=0;i<(int)accVect.size();i++)
    {
        std::cout<<accVect[i].getAccountNumber()<<std::endl;
    }
    bool accValid = bankObj.validateAcc( accVect, accountNumberS,&index1);
    bool moneyValid =false;
    if(accValid == true)
    {
        std::cout<<"Enter Receiver Account Number : "<<std::endl;
        std::cin>>accountNumberR;
        genObj.cinIgnore();

        accValid = bankObj.validateAcc( accVect, accountNumberR,&index2);

        std::cout<<index1<<std::endl;
        std::cout<<index2<<std::endl;

        if(accValid == true)
        {
            std::cout<<"Enter Transfer Money : "<<std::endl;
            std::cin>>ammount;
            genObj.cinIgnore();
            
            moneyValid = moneyValidFun(accVect,ammount,index1);
            if(moneyValid == true)
            {
                balanceS = accVect[index1].getAccountBalance();
                balanceS = balanceS-ammount;
                accVect[index1].updateAccount(balanceS);

                balanceR = accVect[index2].getAccountBalance();   
                balanceR = balanceR+ammount;  
                accVect[index2].updateAccount(balanceR);  

                std::cout<<"after\n";
                for(int i=0;i<(int)accVect.size();i++)
                {
                    std::cout<<accVect[i].getAccountNumber()<<std::endl;
                }


                fileObj.clearData();

                boStatus = fileObj.writeFullData(accVect);
                if(boStatus == true)
                {
                    std::cout<<"Money Transfer Done!"<<std::endl;
                }
                else
                {
                    std::cout<<"Money Transfer Fail!"<<std::endl;
                }
            }
        }
    }
}
bool moneyTransN::moneyTransC::moneyValidFun
(
    std::vector<accountDetailsN::accountDetailsC>ver, 
    int money,
    int index
)
{
    bool ret = false;
    int balance = ver[index].getAccountBalance();
    if(balance>money)
    {
        ret =true;
    }
    else
    {
        std::cout<<"Insufficiant Balance \n";
    }

    return ret;
}