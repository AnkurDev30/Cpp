#include<iostream>

class A 
{
    int a;
    public:
        A(int x){
            a=x;
        }
        virtual void fun()
        {
            std::cout<<"hello\n";
        }
};
class B : public A
{
    //int p;
    public:
        B(int x):A( x)
        {
            //B b1;
            A *a;
            a=this;
            a->fun();
        }
        void fun()
        {
            std::cout<<"classB\n";
        } 
};

int main()
{
    B b2(5);
}