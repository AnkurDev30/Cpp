//inheritencae permitsus to inherit properties of base class into derive class
#include<iostream>
class A
{
    private:
        int a;
    public:
        void readA()
        {
            std::cout<<"enter value of a\n";
            std::cin>>a;
        }
        int getA_value()
        {
            return a;
        }
        void diaplayA()
        {
            std::cout<<"print a = "<<a<<std::endl;
        }

};
class B :public A// derived class name : access speifier base class name
{
    private:
        int b;
    public:
        void readB()
        {
            std::cout<<"enter value of b\n";
            std::cin>>b;
        }
        int getB_value()
        {
            return b;
        }
        void diaplayB()
        {
            std::cout<<"print b = "<<b<<std::endl;
        }
        void addition()
        {
           // A a1;//object create
           // a1.readA();
           // int a = a1.getA_value();
            readA();
            int a = getA_value();
            int result = a+b;
            std::cout<<"result = "<<result<<std::endl;

        }

};
int main()
{
    B B1;
    B1.readB();
    B1.diaplayB();
    B1.addition();

}