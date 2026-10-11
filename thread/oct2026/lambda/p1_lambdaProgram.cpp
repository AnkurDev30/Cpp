#include<iostream>
class lambda 
{
    public:
        int a;
        lambda(int p):a(p){}
        void fun()
        {
            [this]()
            {
                std::cout<<this->a<<std::endl;
            }();
            //fun1();
        }
};
int main()
{
    lambda l1(7);
    l1.fun();
}