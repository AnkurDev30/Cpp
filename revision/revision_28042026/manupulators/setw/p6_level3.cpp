/*
🧱 Level 3 (Real Use Case)

Product bill:
Item name → left
Price → right
Print 4 items in table format

Marksheet:
Subject → left
Marks → right
Add at least 5 subjects
*/

#include<iostream>
#include<iomanip>

namespace ProductBill
{
    class ProductBillHandle
    {
        private:
            std::string Item[4];
            int price[4];
        public:
            ProductBillHandle()
            {
                for(int i=0;i<4;i++)
                {
                    std::cout<<"enter item name "<<std::endl;
                    std::cin>>Item[i];
                    std::cout<<"enter "<<Item[i]<<" price"<<std::endl;
                    std::cin>>price[i];
                }
            }
            void printFormatedBill()
            {
                std::cout<<"\n\n------------------"<<std::endl;
                std::cout<<std::left<<std::setw(10)<<"| Item"<<"|"<<std::right<<std::setw(6)<<"Price"<<"|"<<std::endl;
                
                for(int i=0;i<4;i++)
                {
                    std::cout<<"| "<<std::left<<std::setw(8)<<Item[i]<<"|"<<std::right<<std::setw(6)<<price[i]<<"|"<<std::endl;
                }
                std::cout<<"------------------"<<std::endl;
            }
    };
}
namespace Marksheet
{
    class MarksheetHandle
    {
        private:
            std::string sub[5];
            int marks[5];
            int total;
        public:
            MarksheetHandle()
            {
                total=0;
                for(int i=0;i<5;i++)
                {
                    std::cout<<"enter subject name"<<std::endl;
                    std::cin>>sub[i];
                    std::cout<<"enter marks of "<<sub[i]<<std::endl;
                    std::cin>>marks[i];
                    total+=marks[i];
                }
            }
            void printMarksheet()
            {
                std::cout<<"-------------------"<<std::endl;
                std::cout<<"|"<<std::left<<std::setw(10)<<"Subject"<<"|"<<std::right<<std::setw(6)<<" Marks"<<"|"<<std::endl;
                std::cout<<"-------------------"<<std::endl;
                for(int i=0;i<5;i++)
                {
                    std::cout<<"|"<<std::left<<std::setw(10)<<sub[i]<<"|"<<std::right<<std::setw(6)<<marks[i]<<"|"<<std::endl;
                    std::cout<<"-------------------"<<std::endl;

                }
                std::cout<<"|"<<std::left<<std::setw(10)<<"Total"<<"|"<<std::right<<std::setw(6)<<total<<"|"<<std::endl;
                std::cout<<"-------------------"<<std::endl;
            }
    };
}
int main()
{
    int opt;
    std::cout<<"Software can do 2 works:\n1. 3 item product bill\n2. 5 subjects marksheet\n Select option:\n";
    std::cin>>opt;
    if(opt==1)
    {
        ProductBill::ProductBillHandle objBill;
        objBill.printFormatedBill();
    }
    else if(opt==2)
    {
        Marksheet::MarksheetHandle objMark;
        objMark.printMarksheet();
    }


}