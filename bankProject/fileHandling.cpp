//fileHandling.cpp
#include"fileHandling.h"
#include <sstream>
bool fileHandlingN::fileHandlingC:: writeDataInExcel
(
    accountDetailsN::accountDetailsC &Obj
)
{
 
    bool checkStatus =false;
    unsigned int accountNumber = Obj.getAccountNumber();
    unsigned int accountBalance= Obj.getAccountBalance();
    unsigned int accountPinCity= Obj.getAccountPinCity();
    long long accountMobileNum = Obj.getAccountMobileNum();
    std::string accountName    = Obj.getAccountName();
    std::string accountAddress = Obj.getAccountAddress(); 

    std::ofstream file3("AccountDetails.csv",std::ios::app);
    std::ifstream file4("AccountDetails.csv",std::ios::in);
    if(file3.is_open()==true)
    {
        if(file4.is_open()==true)
        {
            if(file4.peek() == EOF)
            {
                file3<<"Balance Sheet"<<std::endl;
                file3<<"Account Number"<<","<<"Account Balance"<<","<<"Name"<<","<<"Address"<<","<<"Pin Code"<<","<<"Mobile"<<","<<std::endl;
            }
        }

        file3<<accountNumber<<","<<accountBalance<<","<<accountName<<","<<accountAddress<<","<<accountPinCity<<","<<accountMobileNum<<","<<std::endl;        
        checkStatus = true;
    }
    return checkStatus;
}

bool fileHandlingN::fileHandlingC::readFullData
(
    std::vector <accountDetailsN::accountDetailsC> &ver
)
{
    bool ret;
    std::ifstream file1("AccountDetails.csv");
    std::string line;
    accountDetailsN::accountDetailsC obj;
    if(file1.is_open()==true)
    {
        getline(file1, line);//first balnce sheet ignore.
        getline(file1, line);//header ignore.
        while(getline(file1,line))
        {
            std::stringstream ss(line);

            std::string accountNumber       ;
            std::string accountBalance      ;
            std::string accountName         ;
            std::string accountAddress      ; 
            std::string accountPinCity      ; 
            std::string accountMobileNum    ;
       
            getline(ss,accountNumber   ,',');
            getline(ss,accountBalance  ,',');
            getline(ss,accountName     ,',');
            getline(ss,accountAddress  ,',');
            getline(ss,accountPinCity  ,',');
            getline(ss,accountMobileNum,',');

            unsigned int tempAccountNumber       = std::stoi(accountNumber);
            unsigned int tempAccountBalance      = std::stoi(accountBalance);
            unsigned int tempAccountPinCity      = std::stoi(accountPinCity);
            long long    tempAccountMobileNum    = std::stoll(accountMobileNum);

            obj.setAccountNumber   (tempAccountNumber);
            obj.setAccountBalance  (tempAccountBalance);
            obj.setAccountPinCity  (tempAccountPinCity);
            obj.setAccountMobileNum(tempAccountMobileNum);
            obj.setAccountName     (accountName );
            obj.setAccountAddress  (accountAddress ); 

            ver.push_back(obj);
            ret = true;
        }
    }
    else
    {
        ret=false;
    }
    return ret;
}

void fileHandlingN::fileHandlingC::clearData()
{
    std::ofstream file("AccountDetails.csv", std::ios::trunc);
    file.close();
}
bool fileHandlingN::fileHandlingC::writeFullData
(
    std::vector <accountDetailsN::accountDetailsC> &ver
)
{
    bool ret;
    std::ofstream file1("AccountDetails.csv",std::ios::out);

    std::string line;

    if(file1.is_open()==true)
    {
        file1<<"Balance Sheet"<<std::endl;
        file1<<"Account Number"<<","
            <<"Account Balance"<<","
            <<"Name"<<","
            <<"Address"<<","
            <<"Pin Code"<<","
            <<"Mobile"<<","
            <<std::endl;      

        for(int i=0;i<(int)ver.size();i++)
        {
            unsigned int accountNumber      =ver[i].getAccountNumber();
            unsigned int accountBalance     =ver[i].getAccountBalance();
            unsigned int accountPinCity     =ver[i].getAccountPinCity();
            long long    accountMobileNum   =ver[i].getAccountMobileNum();
            std::string  accountName        =ver[i].getAccountName();
            std::string  accountAddress     =ver[i].getAccountAddress(); 

            file1<<accountNumber<<","
            <<accountBalance<<","
            <<accountName<<","
            <<accountAddress<<","
            <<accountPinCity<<","
            <<accountMobileNum<<","
            <<std::endl;                   
        } 
    std::ofstream file1("AccountDetails.csv",std::ios::out);

        ret=true; 
    }
    else
    {
        ret=false;
    }
    return ret;
}