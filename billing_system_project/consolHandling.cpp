 
 #include"AppMain.h"
/********************************************
File name   :   consolHandling.cpp
Description :   control the consol related application.
Date        :   18 May 2026.
Aurther     :   Ankur Chourey
*********************************************/
 void LINE()
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
 void _funUpdate
(
    std::vector<_namespaceAppMain::_classAppMain>&tempVec,
    _namespaceAppMain::_classAppMain &tempObj
)
{
    auto exitChar = 'x';
    do 
    {
        LINE();

        std::cout<<"enter details\n";
        
        tempObj._funReadData();

        tempVec.push_back(tempObj);

      //  _namespaceAppMain::_classAppMain::count++;
        
        std::cout<<"new bill?\n(y/n)\n";
        std::cin>>exitChar;

        if(exitChar!='y' && exitChar!='Y')LINE();;

    }while(exitChar == 'Y' || exitChar == 'y');

    //*pCount = _namespaceAppMain::_classAppMain::count;
}
float _namespaceAppMain::_classAppMain::_funTotalCalc()
{
    float _floatCalcTotal =0;


       float  _priceIntoQuant=0;
        _priceIntoQuant+= static_cast<float>( _floatItemPrice*_intquantity);

        if( _charGstOption =='y'|| _charGstOption =='Y')
        {
            _floatCalcTotal+= static_cast<float>(_priceIntoQuant + ((_priceIntoQuant * _intGST)/100.0));
        }
        else
        {
            _floatCalcTotal=_priceIntoQuant;
        }


        if(_charDiscountOption =='y'|| _charDiscountOption =='Y')
        {
            //std::cout<<"d\n";
            //std::cout<<_intdiscount<<std::endl;
            if(_intdiscount <_priceIntoQuant)
            {
                //std::cout<<"e\n";
                _floatCalcTotal = (_priceIntoQuant - (static_cast<float>(_intdiscount)));
            }
            else
            {
                //std::cout<<"f\n";
                _floatCalcTotal=_priceIntoQuant;
            } 
        }
        else
        {
            _floatCalcTotal= _priceIntoQuant;
        }

    return _floatCalcTotal;
}


void _funWrite
(
    std::vector<_namespaceAppMain::_classAppMain>&tempVec
)
{

    float _floatTotalTemp;// = _funCalcTotal(tempVec,*pCount);
    static float _floatFinalTotal =0;
    LINE();
    std::cout<<"| "<<std::left<<std::setw(10)<<"Item"<<"| "
    <<std::left<<std::setw(10)<<"Quantity"<<"| "
    <<std::left<<std::setw(10)<<"Price"<<"| "
    <<std::left<<std::setw(10)<<"GST"<<"| "
    <<std::left<<std::setw(10)<<"Discount"<<"| "
    <<std::left<<std::setw(10)<<"Total"<<"|\n";
    LINE();

    for(int i=0;i < tempVec.size();i++)
    {
        _floatTotalTemp = tempVec[i]._funTotalCalc();
        _floatFinalTotal+=_floatTotalTemp;
        std::cout<<"| "
        <<std::right<<std::setw(10)<<tempVec[i]._strItem<<"| "
        <<std::right<<std::setw(10)<<tempVec[i]._intquantity<<"| "
        <<std::right<<std::setw(10)<<tempVec[i]._floatItemPrice<<"| "
        <<std::right<<std::setw(10)<<tempVec[i]._intGST<<"| "
        <<std::right<<std::setw(10)<<tempVec[i]._intdiscount<<"| "
        <<std::right<<std::setw(10)<<_floatTotalTemp<<"|\n";
        LINE();
    }
    std::cout<<"| "
    <<std::left<<std::setw(58)<<"Final Total"<<"| "
    <<std::right<<std::setw(10)<<_floatFinalTotal<<"|\n";
    LINE();
}