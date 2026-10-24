

//pure virtual funtion
/*
    *inheritance
    *in base class virtual funtion should initialize by 0

    if a class have any pure virtual funtion we cant make object of that and 
    this type of class called abstarct class.
*/

/**
diffrence b/w virtual function and pure virtual function

1. virtual function have defination
1. but pure virtual funtion have not defination

2. virtual function we cant initialize with any value
2. pure virtual function we initilize with 0

3. if a class have virtual funtion that class called normal base class.
3. if a class have pure virtula function that class called abstarct  class
*/

#include<iostream>

class base 
{
    public:
        virtual void fun()=0;//pure virtual function
};
class derived :public base 
{
    public:
        void fun() override 
        {
            std::cout<<"i am from derived\n";
        }
};

int main()
{
   // base u;
    derived d;
    base *p=&d;//NULL

   // base o1;

    p->fun();//i am from base
    //o1.fun();

}

