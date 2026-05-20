/********************************************
File name   :   fileHandling.cpp
Description :   control the file related application.
Date        :   18 May 2026.
Aurther     :   Ankur Chourey
*********************************************/
#include"AppMain.h"

 void LINE_FILE(std::ofstream &file)
{
    
    file<<"-------------------------------------------------------------------------\n";
    
} 
void _fileHandling(std::vector<_namespaceAppMain::_classAppMain>&tempVec)
{
    std::ofstream file1("bill_data.csv");
    float _floatTotalTemp;// = _funCalcTotal(tempVec,*pCount);
    static float _floatFinalTotal =0;
    if(file1.is_open())
    {
        //std::cout<<"file open\n";
        LINE_FILE(file1);
        file1<<"| "<<std::left<<std::setw(10)<<"Item"<<"| "
        <<std::left<<std::setw(10)<<"Quantity"<<"| "
        <<std::left<<std::setw(10)<<"Price"<<"| "
        <<std::left<<std::setw(10)<<"GST"<<"| "
        <<std::left<<std::setw(10)<<"Discount"<<"| "
        <<std::left<<std::setw(10)<<"Total"<<"|\n";
        LINE_FILE(file1);
        
        for(int i=0;i < tempVec.size();i++)
        {
        _floatTotalTemp = tempVec[i]._funTotalCalc();
        _floatFinalTotal+=_floatTotalTemp;
        file1<<"| "
        <<std::right<<std::setw(10)<<tempVec[i]._strItem<<"| "
        <<std::right<<std::setw(10)<<tempVec[i]._intquantity<<"| "
        <<std::right<<std::setw(10)<<tempVec[i]._floatItemPrice<<"| "
        <<std::right<<std::setw(10)<<tempVec[i]._intGST<<"| "
        <<std::right<<std::setw(10)<<tempVec[i]._intdiscount<<"| "
        <<std::right<<std::setw(10)<<_floatTotalTemp<<"|\n";
        LINE_FILE(file1);
        }
        file1<<"| "
        <<std::left<<std::setw(58)<<"Final Total"<<"| "
        <<std::right<<std::setw(10)<<_floatFinalTotal<<"|\n";
        LINE_FILE(file1);

        file1.close();
    }
    else
    {
        std::cout<<"file not open\n";
    }
}