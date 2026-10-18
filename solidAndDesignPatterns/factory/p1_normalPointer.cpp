#include<iostream>

class engine 
{
    public:
        virtual void fun()
        {
            std::cout<<"engine class\n";
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
            std::cout<<"electric \n";
        }
};

class factroy_class 
{
    public:
        static engine* createObj(int type)
        {
            if(type == 1)
            {
                petrol *p = new petrol ();
                return p;
            }
            if(type == 2)
            {
                electric *p=new electric();
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
    engine *p = factroy_class::createObj(1);
    p->fun();
    engine *q=factroy_class::createObj(2);
    q->fun();
}