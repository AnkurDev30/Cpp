#include<iostream>
#include<memory>
class engine 
{
    public:
        virtual void fun()
        {

        }
        virtual ~engine()
        {

        }
};
class petrol :public engine
{
    public:
        void fun()
        {
            std::cout<<"petrol\n";
        }
};
class electric :public engine
{
    public:
        void fun()
        {
            std::cout<<"electric\n";
        }
};

class factoryObj
{
    public:
        static std::unique_ptr<engine> createObj(int type)
        {
            if(type==1)
            {
                return std::make_unique<petrol>();
            }
            else if(type==2)
            {
                return std::make_unique<electric>();
            }
            else 
            {
                return nullptr;
            }
        }
};

int main()
{
    std::unique_ptr<engine>p = factoryObj::createObj(1);
    p->fun();
    p =factoryObj::createObj(2);
     p->fun();

}