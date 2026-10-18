#include<iostream>
#include<memory>
class animal 
{
    public:
        virtual void fun()
        {
            std::cout<<"animal fun\n";
        }
};
class dog : public animal 
{
    public:
        void fun()
        {
            std::cout<<"dog\n";
        }
};
class cat: public animal 
{
    public:
        void fun()
        {
            std::cout<<"cat\n";
        }
};

class factory_create
{
    public:
        static std::unique_ptr<animal> createObj(int type)
        {
            if(type==1)
            {
                std::unique_ptr<dog>p = std::make_unique<dog>();
                return p;
            }
            if(type==2)
            {
                std::unique_ptr<cat>p = std::make_unique<cat>();
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
    std::unique_ptr<animal>p =factory_create::createObj(1);
    p->fun();
    p=factory_create::createObj(2);
    p->fun();
}