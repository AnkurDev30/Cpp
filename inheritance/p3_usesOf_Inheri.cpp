#include<iostream>
class Ex 
{
    public:
        void fun()
        {
            std::cout<<"inside ex fun\n";
        }
        void save()
        {
            std::cout<<"inside ex save\n";
        }
        void enc()
        {
            std::cout<<"inside ex enc\n";
        }
        void open()
        {
            std::cout<<"inside ex open\n";
        }
};
class newEx : public Ex 
{
    public:
        void save()
        {
            std::cout<<"inside newEx save\n";
        }
        void enc()
        {
            std::cout<<"inside newEx enc\n";
        }   
        void autoUpdate()
        {
            std::cout<<"inside newEx autoUpdate\n";
        }   
        void open()
        {
            std::cout<<"inside newEx open\n";
            Ex::open();//call funtion from base class we use class name 
                        //becuase both have same name of open () funtion
        }   
};
int main()
{
   newEx e;
   e.fun();//base class fun
   e.save();//derived class fun
   e.enc();//derived class
   e.autoUpdate();//derived class
   e.open();//derived class.
}