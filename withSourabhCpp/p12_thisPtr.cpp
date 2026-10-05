#include<iostream>
class thisDemo 
{
    public:
        void fun()
        {
            std::cout<<"address of object : "<<this<<std::endl;
        }
};

int main()
{
    thisDemo t1,t2;
    t1.fun();
    std::cout<<"outside addess : "<<&t1<<std::endl;
    t2.fun();
}