#include<iostream>
#include<memory>
class premLok 
{
    public:
        virtual void fun()
        {
            std::cout<<"fun\n";
        }
};
class shahswat: public premLok
{
    public:
         void fun()
        {
            std::cout<<"shahswat fun\n";
        }
};
class Aishwarya: public premLok
{
    public:
         void fun()
        {
            std::cout<<"Aishwarya fun\n";
        }
};
class factory 
{
    public:
        static std::unique_ptr<premLok> createObj(int type)
        {
            if(type==1)
            {
                return std::make_unique<shahswat>();
            }
            else if(type==2)
            {
                return std::make_unique<Aishwarya>();
            }
            else 
            {
                return nullptr;
            }
        }
};
int main()
{
    std::unique_ptr<premLok>p = factory::createObj(1);
    p->fun();
}