/********************************************
File name   :   AppMain.cpp
Description :   control the application, 
                main function calling.
Date        :   18 May 2026.
Aurther     :   Ankur Chourey
*********************************************/
#include"AppMain.h"
 void LINE(int a)
{
    
    std::cout<<"-------------------------------------------------------------------------\n";
    
} 
int _namespaceAppMain::_classAppMain::_funReadGST(char _charGSTOption)
{
    auto gst =0;

    if(_charGSTOption=='y'|| _charGSTOption=='Y')
    {
        std::cout<<"how much % GST\n";
        std::cin>>gst;
    }
    return gst;
}
int _namespaceAppMain::_classAppMain::_funReadDiscount(char _charDiscountOpt)
{
    auto discount = 0;

    if(_charDiscountOpt=='y'|| _charDiscountOpt=='Y')
    {
        std::cout<<"how much rs discount \n";
        std::cin>>discount;
    }

    return discount;
}
void _namespaceAppMain::_classAppMain::_funReadData()
{
    std::cout<<"item name\n";
    std::cin>>_strItem;
    std::cout<<_strItem<<" quantity\n";
    std::cin>>_intquantity;
    std::cout<<_strItem<<" price\n";
    std::cin>>_floatItemPrice;

    std::cout<<"is GST applied?\n(y/n):";
    std::cin>>_charGstOption;    
    _intGST = _funReadGST(_charGstOption);


    std::cout<<"is discount applied?\n(y/n):";
    std::cin>>_charDiscountOption;
    _intdiscount = _funReadDiscount(_charDiscountOption);

}
static void _funUpadte
(
    std::vector<_namespaceAppMain::_classAppMain>&tempVec,
    _namespaceAppMain::_classAppMain &tempObj,
    int *pCount
)
{
    auto exitChar = 'x';
    do 
    {
        LINE(DOT);

        std::cout<<"enter details\n";
        
        tempObj._funReadData();

        tempVec.push_back(tempObj);

        _namespaceAppMain::_classAppMain::count++;
        
        std::cout<<"new bill?\n(y/n)\n";
        std::cin>>exitChar;

        if(exitChar!='y'||exitChar!='Y')LINE(DOT);;

    }while(exitChar == 'Y' || exitChar == 'y');

    *pCount = _namespaceAppMain::_classAppMain::count;
}
float _funCalcTotal(std::vector<_namespaceAppMain::_classAppMain>&tempVec,int count)
{
    float _floatCalcTotal =0;
    float _priceIntoQuant = 0;

    for(int i=0;i<count;i++)
    {
        _priceIntoQuant=0;
        _priceIntoQuant+= static_cast<float>(tempVec[i]._floatItemPrice*tempVec[i]._intquantity);

        if(tempVec[i]._charGstOption =='y'|| tempVec[i]._charGstOption =='Y')
        {
            _floatCalcTotal+= (_priceIntoQuant + ((_priceIntoQuant*tempVec[i]._intGST)/100.0));
        }
        if(tempVec[i]._charDiscountOption =='y'|| tempVec[i]._charDiscountOption =='Y')
        {
            _floatCalcTotal+= tempVec[i]._intdiscount;
        }
    }
    return _floatCalcTotal;
}
static void _funWrite
(
    std::vector<_namespaceAppMain::_classAppMain>&tempVec,
    int *pCount
)
{

    float _floatTotalTemp = _funCalcTotal(tempVec,*pCount);
    LINE(DOT);
    std::cout<<"| "<<std::left<<std::setw(10)<<"Item"<<"| "
    <<std::left<<std::setw(10)<<"Quantity"<<"| "
    <<std::left<<std::setw(10)<<"Price"<<"| "
    <<std::left<<std::setw(10)<<"GST"<<"| "
    <<std::left<<std::setw(10)<<"Discount"<<"| "
    <<std::left<<std::setw(10)<<"Total"<<"|\n";
    LINE(DOT);

    for(int i=0;i<*pCount;i++)
    {

        
        std::cout<<"| "
        <<std::left<<std::setw(10)<<tempVec[i]._strItem<<"| "
        <<std::left<<std::setw(10)<<tempVec[i]._intquantity<<"| "
        <<std::left<<std::setw(10)<<tempVec[i]._floatItemPrice<<"| "
        <<std::left<<std::setw(10)<<tempVec[i]._intGST<<"| "
        <<std::left<<std::setw(10)<<tempVec[i]._intdiscount<<"| "
        <<std::left<<std::setw(10)<<_floatTotalTemp<<"|\n";
        LINE(DOT);
    }

}
int main()
{

    auto count =0;
    std::vector<_namespaceAppMain::_classAppMain>vec;
    _namespaceAppMain::_classAppMain obj;
    _funUpadte(vec,obj,&count);
    _funWrite(vec,&count);

}