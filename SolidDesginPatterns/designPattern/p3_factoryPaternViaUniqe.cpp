#include<iostream>
#include<memory>

class engine
{
    public:
        virtual void fun()
        {
            std::cout<<"hello\n";
        }
};
class petrol : public engine
{
    public:
    void fun()
        {
            std::cout<<"petrol car\n";
        }
};
class electric : public engine
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
        static  std::unique_ptr<engine> objectCreat(int type) 
        {
            if(type == 1)
            {
                return std::make_unique<petrol>();
                
            }
            else if(type == 2)
            {
                return std::make_unique<electric>();
                
            }
            return nullptr;
        }
};
int main()
{
    std::unique_ptr<engine>p=factory::objectCreat(1);
    p->fun();
    //delete p;
}