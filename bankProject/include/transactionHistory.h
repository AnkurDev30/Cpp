//transactionHistory.h
#ifndef transactionHistory_H
#define transactionHistory_H

#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include"bankingOperation.h"

    namespace transHistN
    {
        class transHistC:public bankingOperationN::bankingOperationC
        {
            public:
               
                char    creditDebitVar  ;
                std::string timeDate       ;
                int     accoutNum       ;
                int     ammount         ;
                
                bool writeTxnHistory(std::vector<transHistN::transHistC> &wrTxnVec);
                bool readTxnHistory(std::vector<transHistN::transHistC> &wrTxnVec);
                void transactionHistory();
                void printTranxHistoryHrader(int accountNum);
        };
    }
#endif