//AppMain.h 
#ifndef APPMAIN_H
#define APPMAIN_H
#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
#include<vector>
#define DOT 50
namespace _namespaceAppMain
{
    class _classAppMain
    {
            public: 
                std::string _strItem;
                int     _intquantity;
                char    _charGstOption;
                char    _charDiscountOption;
                int     _intGST;
                int     _intdiscount;
                float   _floatItemPrice;
                float   _floatTotal;
               // static int count;
                int     _funReadGST(char );
                int     _funReadDiscount(char );
                void    _funReadData();
                float   _funTotalCalc();

    };
}


#endif