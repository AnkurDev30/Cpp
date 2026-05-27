//transactionHistory.cpp
#include"transactionHistory.h"
#include <sstream>
#include"AppMain.h"
#include<iomanip>
bool transHistN::transHistC::writeTxnHistory(std::vector<transHistN::transHistC> &wrTxnVec)
{
    std::ofstream file("TransactionHistory.csv",std::ios::app);
    bool ret =false;

    if(file.is_open()==true)
    {

        for(int i=0;i<(int)wrTxnVec.size();i++)
        {
            file<<wrTxnVec[i].accoutNum<<","
            <<wrTxnVec[i].ammount<<","
            <<wrTxnVec[i].creditDebitVar<<","
            <<wrTxnVec[i].timeDate;
        }
        ret =true;
    }
    else
    {
        ret =false;
    }
    return ret;
}
bool transHistN::transHistC::readTxnHistory(std::vector<transHistN::transHistC> &wrTxnVec)
{
    std::ifstream file1("TransactionHistory.csv",std::ios::in);
    transHistN::transHistC obj;
    std::string line;
    bool ret=false;

    if(file1.is_open()==true)
    {
        while(getline(file1,line))
        {
            std::stringstream ss(line);

            std::string  accNumber;
            std::string accMoney;
            std::string creDebVar;
            std::string timeDate;

            getline(ss,accNumber,',');
            getline(ss,accMoney,',');
            getline(ss,creDebVar,',');
            getline(ss,timeDate,',');
     
            obj.creditDebitVar = creDebVar[0];
            obj.timeDate = timeDate;
            obj.accoutNum = std::stoi(accNumber);
            obj.ammount = std::stoi(accMoney);
            
            ret=true;

            wrTxnVec.push_back(obj);
        }
    }
    else
    {
        ret=false;
    }
    return ret;
}
void transHistN::transHistC:: transactionHistory()
{
    generalOperationN::generalOperationC genObj;
    genObj.clearScreen();
    genObj.welcomeBank();
    int printHandl=0;
    int accountNum =0;
    std::vector<transHistN::transHistC> readVec;

    std::cout<<"Transaction Histor : \n";

    std::cout<<"Enter Account Number :\n";
    std::cin>>accountNum;

    bool readValid = readTxnHistory(readVec);

    if(readValid==true)
    {
        genObj.clearScreen();
        //genObj.welcomeBank();
        for(int i=0;i<(int)readVec.size();i++)
        {
            if(readVec[i].accoutNum == accountNum)
            {
                if(printHandl==0)
                {
                    printTranxHistoryHrader(accountNum);
                    printHandl++;
                }
                std::cout<<"| "<<std::left<<std::setw(14)<<readVec[i].ammount
                <<"| "<<std::left<<std::setw(14)<<readVec[i].creditDebitVar
                <<"| "<<std::left<<std::setw(25)<<readVec[i].timeDate<<
                std::endl;
            }
        }
    
        for(int i=0;i<58;i++)
        std::cout<<"-";

        std::cout<<std::endl;        
    }
}
void transHistN::transHistC::printTranxHistoryHrader(int accountNum)
{
    for(int i=0;i<58;i++)
    std::cout<<"-";

    std::cout<<std::endl;

    std::cout<<"Transaction History Account Number : "<<accountNum<<std::endl;
    for(int i=0;i<58;i++)
    std::cout<<"-";

    std::cout<<std::endl;

    std::cout<<"| "<<std::left<<std::setw(14)<<"Amount"
            <<"| "<<std::left<<std::setw(14)<<"Credit/ Debit"
            <<"| "<<std::left<<std::setw(25)<<"Date &Time"
            <<std::endl;
    
    for(int i=0;i<58;i++)
    std::cout<<"-";

    std::cout<<std::endl;
}