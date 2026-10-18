#include<iostream>

class base 
{
    public:
        int x;
        virtual void fun()
        {
            std::cout<<"virtual funtion\n";
        }
};
class second_base
{
    public:
    virtual void fun2()
    {
        std::cout<<"fun check\n";
    }
};

int main()
{
    base b1;
    second_base sb1;
    std::cout<<"size of int "<<sizeof(int)<<std::endl;
    std::cout<<sizeof(b1)<<" "<<sizeof(sb1)<<std::endl;
}