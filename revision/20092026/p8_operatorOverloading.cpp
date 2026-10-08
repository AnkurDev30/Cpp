#include<iostream>

class A 
{
    public:
        int a;
        void readA()
        {
            std::cout<<"enter a value\n";
            std::cin>>a;
        }
        A& operator +(A &obj)
        {
            this->a = this->a+obj.a;
            return*this;
        }
        void display()
        {
            std::cout<<"value : "<<a<<std::endl;
        }
};
int main()
{
    A A1,A2,A3;
    A1.readA();
    A2.readA();
    A3 = A1+A2;

    A3.display();
}