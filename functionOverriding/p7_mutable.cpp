#include<iostream>

class A 
{
    public:
        mutable int a;
        int b;
        void read()
        {
            std::cout<<"enter data\n";
            std::cin>>a>>b;
        }
        void print()const
        {
            a++;
            std::cout<<" A and B : "<<a<< " "<<b<<std::endl; 
        }
};

int main()
{
    A a1;
    a1.read();
    a1.print();
}