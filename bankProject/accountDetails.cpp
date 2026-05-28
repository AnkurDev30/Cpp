//accountDetails.cpp
#include"accountDetails.h"
#include"generalOperation.h"
void cinIgnore()
{
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}
void clearScreen()
{
    #ifdef _WIN32
        system("cls");     // Windows
    #else
        system("clear");   // Linux/Ubuntu
    #endif
}

void accountDetailsN::accountDetailsC::setAccountNumber   (unsigned int acc)
{
    accountNumber = acc;
}
void accountDetailsN::accountDetailsC::setAccountBalance  (unsigned int acc)
{
    accountBalance= acc;
}
void accountDetailsN::accountDetailsC::setAccountPinCity  (unsigned int acc)
{
    accountPinCity = acc;
}
void accountDetailsN::accountDetailsC::setAccountMobileNum(long long   mb)
{
    accountMobileNum = mb;
}
void accountDetailsN::accountDetailsC::setAccountName     (std::string name)
{
    accountName = name;
}
void accountDetailsN::accountDetailsC::setAccountAddress  (std::string add)
{
    accountAddress = add;
}

unsigned int accountDetailsN::accountDetailsC:: getAccountNumber()
{
    return accountNumber;
}
unsigned int accountDetailsN::accountDetailsC::getAccountBalance()
{
    return accountBalance;
}
unsigned int accountDetailsN::accountDetailsC::getAccountPinCity()
{
    return accountPinCity;
}
long long accountDetailsN::accountDetailsC::getAccountMobileNum()
{
    return accountMobileNum;
}
std::string accountDetailsN::accountDetailsC::getAccountName()
{
    return accountName;
}
std::string accountDetailsN::accountDetailsC::getAccountAddress()       
{
    return accountAddress;
} 
bool accountDetailsN::accountDetailsC::nameCheck(std::string name)
{
    bool nameOk=false;
    for(unsigned int i=0;i<name.length();i++)
    {
        if((name[i]>='a' && name[i]<='z')||
        (name[i]>='A' && name[i]<='Z')||(name[i]==' '))
        {
            nameOk=true;
        }
        else
        {
            nameOk=false;
            break;
        }
    }
    return nameOk;
}
bool accountDetailsN::accountDetailsC::checkAccountNumber(unsigned int readGenratedAccNum)
{
    bool flag=false;
    unsigned int readAcctemp=0;
    std::ifstream file2("AccountNumSave.txt",std::ios::in);

    while(file2>>readAcctemp)
    {
        if(readAcctemp == readGenratedAccNum)
        {
            std::cout<<"account number available \n";
            flag=true;
            break;
        }
    }
    return flag;
}
int accountDetailsN::accountDetailsC::generateAccountNumber()
{
    unsigned int randomAccNum; 
    bool checkAcc;
    char charExp;
    do
    {
        std::cout<<"account number generating....\n";
        srand(time(0)); 

        std::ofstream file1("AccountNumSave.txt",std::ios::app);
        if(file1.is_open()==true)
        {
            randomAccNum = rand() % 9000 + 1000;
            
            checkAcc = checkAccountNumber(randomAccNum);

            if(checkAcc==true)
            {
                std::cout<<"need to genrate new account number\n";
                std::cout<<randomAccNum<<" is already available\n";
                std::cout<<"press y for new account number\n";
                std::cin>>charExp;

            }
            else
            {
                std::cout<<"generated account number : "<<randomAccNum<<std::endl;
                file1<<randomAccNum<<std::endl;
            }
            
        }
        file1.close();
    }while(checkAcc==true);

    return randomAccNum;
}

void accountDetailsN::accountDetailsC::setData()
{
    bool nameCheckBool=false;
    generalOperationN::generalOperationC genObj;
    //name 
    do
    {
        std::cout<<"Enter Account Holder Name : \n";
        getline(std::cin,accountName);
        nameCheckBool = nameCheck(accountName);

        if(nameCheckBool == false)
        {
            std::cout<<"Name Should Be Upercase, Lowercase Or Space Only\n";
        }

    }while(nameCheckBool==false);

    //address
    std::cout<<"Enter Address : \n";
    getline(std::cin,accountAddress);

    //pin code
    do
    {
        accountPinCity = genObj.intIput("Enter Pin Code :");
        if(accountPinCity<100000)
        {
            std::cout<<"Pin Code Shoild Be 6 Digit \n";
        }
    }while(accountPinCity<100000);

    //mobile
    do
    {
        accountMobileNum = genObj.longIput("Enter Mobile Number :");
        if(accountMobileNum<=999999999)
        {
            std::cout<<"Mobile Numbner Shoild Be 10 Digit \n";
        }
    }while(accountMobileNum<=999999999);

    //generate Account number.
    accountNumber = generateAccountNumber();
 
    //enter balance
    do
    {
        accountBalance = genObj.intIput("Enter Account Opening Balance :");
        if(accountBalance<1000)
        {
            std::cout<<"Please Use Minimum Ammount 1000/- Rs\n";
        }
    }while(accountBalance<1000);

}
void accountDetailsN::accountDetailsC::updateAccount(int ammount)
{
    accountBalance = ammount;
}