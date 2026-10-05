//in factory pattern we are creating object 
// from another piece of 
// code , so if any new functionlity added so only just 
// factory code update 

#include<iostream>

class engine
{
    public:
        virtual void fun()
        {
            std::cout<<"fun\n";
        }
};
class petrol:public engine
{
    public:
         void fun()
        {
            std::cout<<"petrol car\n";
        }
};
class electric:public engine
{
    public:
         void fun()
        {
            std::cout<<"electric car\n";
        }
};

class factory 
{
    public:
        static engine* objectCreat(int type)
        {
            if(type==1)
            {
                engine *p=new petrol();
                return p;
            }
            else  if(type==2)
            {
                engine *q=new electric();
                return q;
            }
            else 
            {
                return nullptr;
            }
        }
};

int main()
{
    engine *e1 = factory::objectCreat(1);
    e1->fun();
}

