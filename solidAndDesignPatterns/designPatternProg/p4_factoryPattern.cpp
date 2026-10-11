#include<iostream>

class engine
{
    public:
        virtual void fun()
        {
            std::cout<<"hello\n";
        }
};
class petrol:public engine
{
    public:
         void fun()
        {
            std::cout<<"petrol\n";
        }
};
class electric:public engine
{
    public:
         void fun()
        {
            std::cout<<"electric\n";
        }
};

class factory 
{
    public:
        static engine* createObj(int type)
        {
            if(type==1)
            {
                engine *p=new petrol();
                return p;
            }
            if(type==2)
            {
                engine *p=new electric();
                return p;
            }
            else return nullptr;
        }
};
int main()
{
    engine *p = factory::createObj(1);
    p->fun();
    p = factory::createObj(2);
    p->fun();
}