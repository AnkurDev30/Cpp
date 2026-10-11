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

class factroryByUnique 
{
    public:
        static std::unique_ptr<engine> createObj(int type)
        {
            if (type==1)
            {
                return std::make_unique<petrol>();
            }
            if (type==2)
            {
                return std::make_unique<electric>();
            }
            return nullptr;
        }
};
int main()
{
    std::unique_ptr<engine>ptr = factroryByUnique::createObj(1);
    ptr->fun();
     std::unique_ptr<engine>ptr2 = factroryByUnique::createObj(2);
    ptr2->fun();

}