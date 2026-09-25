//practice setw

#include<iostream>
#include<iomanip>
int main()
{
    std::cout<<std::setw(10)<<"ankur"<<std::setw(5)<<"shiva"<<std::endl;
    
    /*
    there we gave setw(10)then ankur
    so setw(10) reserve 10byte or reserve for 10space and then
    write ankur name from last 
    */

    //so o/p will be _____ankur

    // then we gave setw(5) and write shive
    //so setw reserv 5 byte and write shiva there 

    // o/p look like shiva

    //and final op: _____ankurshiva
    return 0;
}