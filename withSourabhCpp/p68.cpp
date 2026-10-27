//override :- it will tell which funtion we have to do override or 
// which function we have to redefine in derived calss
//1 inheritance 2 base nad derived fun with prototype same 
#include<iostream>

class base 
{
    public:
        virtual void fun()
        {
            std::cout<<"hello  i am base\n";
        }
};
class derived :public base 
{
    public:
        void fun() override
        {
            std::cout<<"hi i am derived\n";
        }
        //void fun()
        //{
        //    std::cout<<"hi i am derived2\n";
        //}
};

int main()
{
    base *p = new derived();
    p->fun();
}