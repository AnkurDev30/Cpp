//
#include<iostream>
class test
{
    public:
        int a=30;
        void check()
        {
            std::cout<<"a ="<<a<<std::endl;
        }
};

int main()
{
    test t1;
    t1.check();
}