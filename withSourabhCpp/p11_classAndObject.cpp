#include<iostream>

class A
{
    private:
        int a;
    public:
        void fun()
        {
            std::cout<<"enter value of a\n";
            std::cin>>a;
        }
};
class B
{
    private:
        int a;
       // A a1;//object from class A
    public:
        void fun()
        {
            std::cout<<"enter value of a\n";
            std::cin>>a;
        }
};

int main()
{
    class B b1;

    std::cout<<"size of B = "<<sizeof(b1)<<std::endl;;
}