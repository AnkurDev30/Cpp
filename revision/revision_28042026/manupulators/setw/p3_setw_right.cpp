//
#include<iomanip>
#include<iostream>

int main()
{
    std::cout<<std::right<<std::setw(10)<<"ankur"<<std::endl;

    // right flag first gave space and then fill
    //_____<-<-<-<-<-

    std::cout<<std::left<<std::setw(10)<<"ankur"<<std::endl;

    //left flag start print from left 
    //->->->->->_____
}