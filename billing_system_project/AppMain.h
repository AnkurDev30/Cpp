
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
            int _funReadGST(char );
            int _funReadDiscount(char );
     
            static int count;
            void _funReadData();
    };
}
int _namespaceAppMain::_classAppMain::count = 0;
#endif