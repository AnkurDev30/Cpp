//AppMain.cpp
#include"AppMain.h"

void generalOperationN::generalOperationC::cinIgnore()
{
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

void generalOperationN::generalOperationC::clearScreen()
{
    #ifdef _WIN32
        system("cls");     // Windows
    #else
        system("clear");   // Linux/Ubuntu
    #endif
}

void generalOperationN::generalOperationC::welcomeBank()
{
    std::cout<<"------------------------------------------\n";
    std::cout<<WELCOME_MSG<<std::endl;
    std::cout<<"------------------------------------------\n";
}

void generalOperationN::generalOperationC::delay(int sec)
{
    std::this_thread::sleep_for
    (
        std::chrono::seconds(sec)
    );
}

int main()
{
    generalOperationN::generalOperationC mainObj;
    mainObj.startUpFun();
    return 0;
}

bool generalOperationN::generalOperationC::loginCheck()
{
    std::string loginID;
    int passKey=0;
    bool boStatusLogin = false;
    std::cout<<"enter login Id : "<<std::endl;
    std::cin>>loginID;
    std::cout<<"enter passward  : "<<std::endl;
    std::cin>>passKey;
    if(loginID == LOGINID)
    {

        if(passKey == PASSKEY)
        {
            boStatusLogin= true;
        }
        else
        {
            std::cout<<"check passward\n";
            boStatusLogin= false;
        }
    }
    return boStatusLogin;
}
void generalOperationN::generalOperationC::startUpFun()
{
    generalOperationN::generalOperationC objGen;
    objGen.clearScreen();
    objGen.welcomeBank();
    char exitChar ='n'; 
    int option;
    bool boEntry = objGen.loginCheck();
    if(boEntry == true)
    {
        objGen.clearScreen();
        objGen.welcomeBank();
        std::cout<<"Waiting For Some Time\n";
        objGen.delay(5);
        std::cout<<"Login Successfull...\n";
        objGen.delay(2);
        do
        {
            objGen.clearScreen();
            objGen.welcomeBank();
            std::cout<<"Select The Option\n";
            std::cout<<"1) Opening New Account\t";
            std::cout<<"2) Withdrawl Ammount\n";
            std::cout<<"3) Deposit Ammount\t";
            std::cout<<"4) Display Balance\n";
            std::cout<<"5) Money Transfer\t";
            std::cout<<"6) Transaction History\n";
            std::cin>>option;
            cinIgnore();
            selectOption(option);
            std::cout<<"For Exit Press y\n";
            std::cin>>exitChar;
        }while(exitChar!='y'&& exitChar!='Y');
        objGen.clearScreen();
        std::cout<<"Thank You For Using "<<BANKNAME<<std::endl;
    }
    else
    {
        std::cout<<"login id wrong\n";
    }
}
void generalOperationN::generalOperationC:: selectOption(int option)
{
    bankingOperationN::bankingOperationC bankObj;
    moneyTransN::moneyTransC objMoney;
    transHistN::transHistC txnOb;
        switch(option)
        {
            case 1:
            {
                bankObj.openingAccount();
            }
            break;
            case 2:
            {
                bankObj.withdrawalAmmount();
            }
            break;
            case 3:
            {
                bankObj.depositAmmount();
            }
            break;
            case 4:
            {
                bankObj.displayBalance();
            }
            break;
            case 5:
            {   //money transfer.
                objMoney.moneyTransferFun();
            }
            break;
            case 6:
            {  //tarnsaction History
                txnOb.transactionHistory();
            }
            break;
            default:
            {
                std::cout<<"select correct option\n";
            }
            break;
        }

    std::cout<<"Thank you!"<<std::endl;
}