//bankingOperation.h

#include"AppMain.h"
#include"bankingOperation.h"

void bankingOperationN::bankingOperationC::openingAccount()
{
    generalOperationN::generalOperationC genObj;
    bool checkStatus=false;
    genObj.clearScreen();
    genObj.welcomeBank();
   
    std::cout<<"Opening New Account Department\n";
    std::cout<<"Fill Application Form\n";

    accountDetailsN::accountDetailsC obj;
    fileHandlingN::fileHandlingC fileObj;
    obj.setData();
    checkStatus = fileObj.writeDataInExcel(obj);
    if(checkStatus == true)
    {
        genObj.clearScreen();
        std::cout<<"Wait For Sometime\n";
        genObj.delay(2);
        genObj.clearScreen();
        std::cout<<"Save Data Successfull\n";
    }
}
void bankingOperationN::bankingOperationC::withdrawalAmmount()
{
    
    accountDetailsN::accountDetailsC obj;
    fileHandlingN::fileHandlingC fileObj;
    generalOperationN::generalOperationC genObj;
    unsigned int accountNum=0;
    unsigned int money;
     int index;
    std::vector<accountDetailsN::accountDetailsC>ver;

    genObj.clearScreen();
    genObj.welcomeBank();
   
    std::cout<<"Withdrawal Money \n";

    bool boStatus = fileObj.readFullData(ver);
    if(boStatus==true)
    {
        std::cout<<"Read done\n";
    }
    fileObj.clearData();

    //check data.
    for(int i=0;i<(int)ver.size();i++)
    {
        std::cout<<ver[i].getAccountNumber()<<std::endl;
    }
    
    std::cout<<"Account Number For Withdrawal Money\n  ";
    std::cin>>accountNum;
    genObj.cinIgnore();

    bool boAccountValid = validateAcc(ver,accountNum,&index);

    if(boAccountValid)
    {
        dumyPrint();
        printClintDetails(ver,index);
        withdrwalOperaionPerform(ver,index);
        bool ret = fileObj.writeFullData(ver);
        if(ret==true)
        {
            std::cout<<"Write Data Successfully\n";
        }
    }
}
void bankingOperationN::bankingOperationC::printClintDetails
(
    std::vector<accountDetailsN::accountDetailsC>ver,
    int index
)
{
    generalOperationN::generalOperationC genObj;
    genObj.clearScreen();
    genObj.welcomeBank();
    std::cout<<"Client Details : \n";
    unsigned int accountNumber      =ver[index].getAccountNumber();
    unsigned int accountBalance     =ver[index].getAccountBalance();
    unsigned int accountPinCity     =ver[index].getAccountPinCity();
    long long    accountMobileNum   =ver[index].getAccountMobileNum();
    std::string  accountName        =ver[index].getAccountName();
    std::string  accountAddress     =ver[index].getAccountAddress();   

    std::cout<<"Account Holder Name     :- "<<accountName<<std::endl;
    std::cout<<"Account Holder Address  :- "<<accountAddress<<std::endl;
    std::cout<<"Account Holder Pin Code :- "<<accountPinCity<<std::endl;
    std::cout<<"Account Number          :- "<<accountNumber<<std::endl;
    std::cout<<"Account Mobile          :- "<<accountMobileNum<<std::endl;
    std::cout<<"Account Balance         :- "<<accountBalance<<std::endl;
    
}
void bankingOperationN::bankingOperationC::dumyPrint()
{
       generalOperationN::generalOperationC genObj;
        genObj.clearScreen();
        genObj.welcomeBank();
        std::cout<<"Withdrawal Money Section\n";
        std::cout<<"Finding Account Details\n";
        genObj.delay(2);
}
bool bankingOperationN::bankingOperationC::validateAcc
(
    std::vector<accountDetailsN::accountDetailsC>ver, 
    unsigned int acc,
    int *index
)
{
    bool validate =false;
    unsigned int accountNumVer=0;
    //validate Acc.
    for(int i=0;i<(int)ver.size();i++)
    {
        accountNumVer = ver[i].getAccountNumber();
        if(acc==accountNumVer)
        {
            std::cout<<"Validate Account Successfully\n";
            validate=true;
            *index =i;
            break;
        }
    }
    return validate;
}
void bankingOperationN::bankingOperationC::withdrwalOperaionPerform(
    std::vector<accountDetailsN::accountDetailsC>&ver,
    int index
)
{
    int money;
    int balance;
    std::cout<<"---------------------------------\n";
    std::cout<<"Enter Withdrawal Money\n";
    std::cin>>money;
    balance = ver[index].getAccountBalance();
    if(balance<money)
    {
        std::cout<<"Insufficiant balance\n";
    }
    else
    {
        int newBalance = balance-money;
        ver[index].updateAccount(newBalance);
        std::cout<<"New Balance :- "<<ver[index].getAccountBalance()<<std::endl;
    }
}