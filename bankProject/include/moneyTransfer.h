//moneyTransfer.h
#ifndef moneyTransfer_H
#define moneyTransfer_H

//header include.
#include<iostream>
#include<string>

#include"accountDetails.h"
#include"bankingOperation.h"
#include"fileHandling.h"

namespace moneyTransN
{
    class moneyTransC
    {

        public:
            void moneyTransferFun();
            bool moneyValidFun(
                std::vector<accountDetailsN::accountDetailsC>ver, 
                int money,
                int index
            );
    };
}



#endif