#include<iostream>

class abstractCalss
{
    public:
        virtual void pureFUn()=0;
        void fun()
        {
            std::cout<<"hmm\n";
        }
};
class one :public abstractCalss
{
    public:
        void pureFUn()
        {
            std::cout<<"hello\n";
        }
};
int main()
{
    abstractCalss obj1; //try to make object
}