#include<iostream>
class B
{
    public:
        int add(int a,int b)
        {
            return (a+b);
        }
};
class A 
{
    public:
        B b1;
        void result(int a,int b)
        {
            int result = b1.add(a,b);
            std::cout<<"result = "<<result<<std::endl;
        }
};

int main()
{
    A a1;
    a1.result(3,7);
}