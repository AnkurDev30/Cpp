//bankingOperation.h

//#include"AppMain.h"
#include"generalOperation.h"
#include"bankingOperation.h"
#include "transactionHistory.h"
#include <ctime>
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
void bankingOperationN::bankingOperationC::depositAmmount()
{
    accountDetailsN::accountDetailsC obj;
    fileHandlingN::fileHandlingC fileObj;
    generalOperationN::generalOperationC genObj;
    transHistN::transHistC trxnObj;
    unsigned int accountNum=0;
    std::vector<transHistN::transHistC>vecTxn;
    int index;
    std::vector<accountDetailsN::accountDetailsC>ver;
    std::time_t now = std::time(0);

    genObj.clearScreen();
    genObj.welcomeBank();

    std::cout<<"Deposit Money \n";

    bool boStatus = fileObj.readFullData(ver);
    if(boStatus!=true)
    {
        std::cout<<"Read Not Successfull\n";
        return;
    }
   
    accountNum = genObj.intIput("Account Number For Deposit Money :");

    bool boAccountValid = validateAcc(ver,accountNum,&index);

    if(boAccountValid)
    {
        dumyPrintDeposit();
        printClintDetails(ver,index);

        //time collect.
        std::string dt = std::ctime(&now);

        trxnObj.creditDebitVar = 'C';
        trxnObj.timeDate = dt;
        trxnObj.accoutNum = accountNum;
        trxnObj.ammount = depositOperaionPerform(ver,index);

        vecTxn.push_back(trxnObj);
        bool retTxn = trxnObj.writeTxnHistory(vecTxn);
        if(retTxn == true)
        {
            std::cout<<"Data Saved!"<<std::endl;
            genObj.delay(2);
        }

        fileObj.clearData();
        bool ret = fileObj.writeFullData(ver);
        if(ret==true)
        {
            std::cout<<"Write Data Successfully\n";
        }
    }
    else
    {
        std::cout<<"Account Number Not Found\n";
    }
}
void bankingOperationN::bankingOperationC::withdrawalAmmount()
{
    
    accountDetailsN::accountDetailsC obj;
    fileHandlingN::fileHandlingC fileObj;
    generalOperationN::generalOperationC genObj;
    unsigned int accountNum=0;
    transHistN::transHistC trxnObj;
    std::vector<transHistN::transHistC>vecTxn;
    std::time_t now = std::time(0);

    //unsigned int money;
    int index;
    std::vector<accountDetailsN::accountDetailsC>ver;

    genObj.clearScreen();
    genObj.welcomeBank();
   
    std::cout<<"Withdrawal Money \n";

    bool boStatus = fileObj.readFullData(ver);
    if(boStatus!=true)
    {
        std::cout<<"Read Not Successfully\n";
        return;
    }
    
    accountNum = genObj.intIput("Account Number For Withdrawal Money : ");

    bool boAccountValid = validateAcc(ver,accountNum,&index);

    if(boAccountValid)
    {
        dumyPrintWithDrawal();
        printClintDetails(ver,index);
        //time collect.
        std::string dt = std::ctime(&now);

        trxnObj.creditDebitVar = 'D';
        trxnObj.timeDate = dt;
        trxnObj.accoutNum = accountNum;
        trxnObj.ammount = withdrwalOperaionPerform(ver,index);

        vecTxn.push_back(trxnObj);
        bool retTxn = trxnObj.writeTxnHistory(vecTxn);
        if(retTxn == true)
        {
            std::cout<<"Data Saved!"<<std::endl;
            genObj.delay(2);
        }
        fileObj.clearData();
        bool ret = fileObj.writeFullData(ver);
        if(ret==true)
        {
            std::cout<<"Write Data Successfully\n";
        }
    }
    else
    {
        std::cout<<"Account Number Not Found\n";
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

void bankingOperationN::bankingOperationC::dumyPrintDeposit()
{
    generalOperationN::generalOperationC genObj;
    genObj.clearScreen();
    genObj.welcomeBank();
    std::cout<<"Deposit Money Section\n";
    std::cout<<"Finding Account Details\n";
    genObj.delay(2);
}
void bankingOperationN::bankingOperationC::dumyPrintWithDrawal()
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

    for(int i=0;i<(int)ver.size();i++)
    {
        accountNumVer = ver[i].getAccountNumber();
        if(acc==accountNumVer)
        {
            //std::cout<<"Validate Account Successfully\n";
            validate=true;
            *index =i;
            break;
        }
    }
    return validate;
}

int bankingOperationN::bankingOperationC::enterMoney(int flag)
{
    generalOperationN::generalOperationC genObj;
    int money;
    do
    {
        if(flag==0)//for deposit ammount
        {
            money = genObj.intIput("Enter Deposit Money : ");
        }
        else if(flag==1)//for deposit ammount
        {
            money = genObj.intIput("Enter Withdrawal Money: ");
        }
        else if(flag==2)//for deposit ammount
        {
            money = genObj.intIput("Enter Transfer Money: ");
        } 
    }while(money<0);

    return money;
}
int bankingOperationN::bankingOperationC::depositOperaionPerform(
    std::vector<accountDetailsN::accountDetailsC>&ver,
    int index
)
{
    int money;
    int balance;
    std::cout<<"---------------------------------\n";

    money = enterMoney(0);

    balance = ver[index].getAccountBalance();

    int newBalance = balance + money;
    ver[index].updateAccount(newBalance);
    std::cout<<"New Balance :- "<<ver[index].getAccountBalance()<<std::endl;
    return money;
}

int bankingOperationN::bankingOperationC::withdrwalOperaionPerform(
    std::vector<accountDetailsN::accountDetailsC>&ver,
    int index
)
{
    int money;
    int balance;
    std::cout<<"---------------------------------\n";
    

    money = enterMoney(1);
    balance = ver[index].getAccountBalance();

    if(balance<money)
    {
        std::cout<<"Insufficiant balance\n";
    }
    else
    {
        int newBalance = balance - money;
        ver[index].updateAccount(newBalance);
        std::cout<<"New Balance :- "<<ver[index].getAccountBalance()<<std::endl;
    }
    return money;
}
void bankingOperationN::bankingOperationC::displayBalance()
{
    accountDetailsN::accountDetailsC obj;
    fileHandlingN::fileHandlingC fileObj;
    generalOperationN::generalOperationC genObj;

    int displayBalanceOpt = 0;

    std::vector<accountDetailsN::accountDetailsC>ver;
    genObj.clearScreen();
    genObj.welcomeBank();
   
   // std::cout<<"Display Balance \n";
 
    bool boStatus = fileObj.readFullData(ver);

    if(boStatus==true)
    {
        //std::cout<<"Read done\n";
      //  std::cin>>displayBalanceOpt;
        displayBalanceOpt = genObj.intIput
                            (
                                "Display Balnce\n1) As Per Account Number\n2) As Per Mobile Number"
                            );
        switch(displayBalanceOpt)
        {
            case 1:
                displayBalanceAcc(ver);
            break;
            case 2:
                displayBalanceMobile(ver);
            break;
            default:
                std::cout<<"Wrong Option Selected\n";
            break;

        }
    }
}
void bankingOperationN::bankingOperationC::displayBalanceAcc
(
    std::vector<accountDetailsN::accountDetailsC>ver
)
{
    generalOperationN::generalOperationC genObj;
    int acc = 0;
    int index=0;
    int accVer=0;
    genObj.clearScreen();
    genObj.welcomeBank();

    acc = genObj.intIput("Enter Account Number For Display Balance : ");

    bool boAccountValid = validateAcc(ver,acc,&index);
    if(boAccountValid == true)
    {
        for(int i=0;i<(int)ver.size();i++)
        {
            accVer = ver[i].getAccountNumber();
            if(acc == accVer)
            {
                genObj.clearScreen();
                genObj.welcomeBank();
                std::cout<<"Account Number = "<<accVer<<std::endl;
                std::cout<<"Current Balance = "<<ver[i].getAccountBalance()<<std::endl;
                break;
            }
        }
    }
}
void bankingOperationN::bankingOperationC::displayBalanceMobile(std::vector<accountDetailsN::accountDetailsC>ver)
{
    generalOperationN::generalOperationC genObj;
    long long mb    =   0;
    int index       =   0;
    long long mbVer    =   0;
    genObj.clearScreen();
    genObj.welcomeBank();
    
    mb = genObj.longIput("Enter Mobile Number For Display Balance : ");

    bool boAccountValid = validateMbNumber(ver,mb,&index);
    if(boAccountValid == true)
    {
        for(int i=0;i<(int)ver.size();i++)
        {
            mbVer = ver[i].getAccountMobileNum();
            if(mb == mbVer)
            {
                genObj.clearScreen();
                genObj.welcomeBank();
                std::cout<<"Mobile Number = "<<mbVer<<std::endl;
                std::cout<<"Current Balance = "<<ver[i].getAccountBalance()<<std::endl;
                break;
            }
        }
    }
}
bool bankingOperationN::bankingOperationC::validateMbNumber
(
    std::vector<accountDetailsN::accountDetailsC>ver, 
    long long mb,
    int *index
)
{
    generalOperationN::generalOperationC genObj;
    bool validate =false;
    long long mbNumVer=0;

    genObj.welcomeBank();
   
    for(int i=0;i<(int)ver.size();i++)
    {
        mbNumVer = ver[i].getAccountMobileNum();
        if(mb == mbNumVer)
        {
            std::cout<<"Validate Mobile Number Successfully\n";
            validate=true;
            *index =i;
            break;
        }
    }
    return validate;
}
bool bankingOperationN::bankingOperationC::validateAccNumAsPerAcc
(
    unsigned int accountNumber
)
{
    bool retVal = false;

    accountDetailsN::accountDetailsC obj;
    fileHandlingN::fileHandlingC fileObj;

    std::vector<accountDetailsN::accountDetailsC>ver;

    bool boStatus = fileObj.readFullData(ver);
    unsigned int temAcc;
    if(boStatus == true)
    {
        for(int i=0;i<(int)ver.size();i++)
        {
            temAcc = ver[i].getAccountNumber();
            if(accountNumber == temAcc)
            {
                retVal = true;
                break;
            }
        }
    }
    return retVal;
}