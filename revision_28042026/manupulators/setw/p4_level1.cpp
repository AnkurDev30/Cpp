/*
🧱 Level 1 (Basic Understanding)
Print a number 123 in width 10:
Once right aligned
Once left aligned
Print two values:
"Hi" and 50
Make "Hi" left aligned and 50 right aligned in same row
*/

#include<iomanip>
#include<iostream>
int main()
{
    std::cout<<std::right<<std::setw(10)<<"123"<<std::endl;
    std::cout<<std::left<<std::setw(10)<<"123"<<std::endl;

    //std::cout<<std::left<<"hi"<<std::right<<"50"<<std::endl;
    std::cout<<std::left<<std::setw(10)<<"hi"<<std::right<<std::setw(10)<<"50"<<std::endl;
}