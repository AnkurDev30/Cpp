//Template: template is nothing but allow to make genric function or class 
//that can work for genric. 

//that can work with any data type.

//*syntax : template <typename var>
//genric funtion or genric class.

//2 types:- funtion template , class tempate 

#include<iostream>

template <typename T>
void fun(T a)
{

    std::cout<<"data : "<<a<<std::endl;
}

int main()
{
    fun(10.5);//double
    fun("SK");//string
    fun(10000);//int
    fun('A');//char
}
