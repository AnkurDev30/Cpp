//refrence 
//refrence is nothing but its constant pointer
// it will provide alias name of variable.
// it will not create copy variable
// initaization and decalartion should be same time
// again initilization not posiible
// datatype_name& variable_name = initilize with other variable.

#include<iostream>

int main()
{

    int x=50;
    int& y=x;

    std::cout<<"x= "<<x<<" y="<<y<<std::endl;

    y=100;
    std::cout<<"x= "<<x<<std::endl;

    x=1000;
    std::cout<<"y= "<<y<<std::endl;
}