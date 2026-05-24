//bankingOperation.h
#ifndef bankingOperation_H
#define bankingOperation_H
#include"accountDetails.h"
#include"fileHandling.h"

namespace bankingOperationN
{
    class bankingOperationC
    {
        private:
            void dumyPrint();
            void printClintDetails(
                std::vector<accountDetailsN::accountDetailsC>ver,
                int index
            );

        public:
            void withdrawalAmmount();
            void depositAmmount(int accountNum);
            void openingAccount();
            bool validateAcc(
                std::vector<accountDetailsN::accountDetailsC>ver, 
                unsigned int acc,
                int *index
            );
            void withdrwalOperaionPerform(
                std::vector<accountDetailsN::accountDetailsC>&ver,
                int index
            );
    };
}
#endif
