#include<iostream>// header file :- istream ostream  <<  >>
/*
syntax class class_name {

}; 
*/

class MyClass
{
    private:  //only for with in  class
        int a;
    protected://useful for inheritance
        int b;
    public: //can access anywhere
        int c;
        void fun()
        {
            a=20;
            std::cout<<"a ="<<a<<std::endl;
        }
};

int main()
{
   MyClass obj1;
   
   obj1.c=10;//try to access private member.

   std::cout<<"a value = "<<obj1.c<<std::endl;//std::endl,std::cin,std::cout


   obj1.fun();
}
