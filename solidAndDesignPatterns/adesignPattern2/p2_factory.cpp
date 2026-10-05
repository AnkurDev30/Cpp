#include<iostream>

class engin 
{
    public:
        virtual void fun()
        {
            std::cout<<"engin fun\n";
        }
};
class petrol :public engin 
{
    public:
         void fun()
        {
            std::cout<<"petrol fun\n";
        }
};
class electric:public engin 
{
    public:
         void fun()
        {
            std::cout<<"electric fun\n";
        }
};

class factory 
{
    public:
        static engin* objectCreateByFactor(int type)
        {
            if(type ==1 )
            {
               engin *p=new petrol();
               return p;
            }
            else if(type ==2 )
            {
               engin *p=new electric();
               return p;
            } 
            else
            {
                return nullptr;
            }
        }
};

int main()
{
    engin *e = factory::objectCreateByFactor(1);
    e->fun();
    e=factory::objectCreateByFactor(2);
    e->fun();
}