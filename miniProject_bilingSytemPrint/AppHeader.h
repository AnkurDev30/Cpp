//AppHeader.h

#include<iostream>
#include<iomanip>

namespace billing_system
{
    class BillingSystem 
    {
        private:
            int m_numberOfItems;
            struct ms_Input
            {
                std::string name;
                float price;
                int quantity;
            };
            ms_Input *pms_Input;
        public:
            BillingSystem(int numberOfItem);
            ~BillingSystem()
            {
                delete[] pms_Input;
            }
        int takingInput(int numberOfItems);
        int printOutput(int numberOfItems);
        void printLine();
    };
}