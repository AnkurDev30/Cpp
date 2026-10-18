#include<iostream>

class ram 
{
    public:
        void fun()
        {
            std::cout<<"rama\n";
        }
};
class shyaam 
{
    public:
        void fun()
        {
            std::cout<<"shyaam\n";
        }
};

int main()
{
    ram r1;
    shyaam s1;
    r1.fun();
    s1.fun();

    ram *prm = &s1;
    prm->fun();
}