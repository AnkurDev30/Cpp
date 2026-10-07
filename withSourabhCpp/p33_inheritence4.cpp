#include<iostream>

class base 
{
    private:
        int a;
    public:
        void readA()
        {
            std::cout<<"enter a value\n";
            std::cin>>a;
        }
        void display()
        {
            std::cout<<"display a : "<<a<<std::endl;
        }
        int getValue()
        {
            std::cout<<"get a : "<<std::endl;
            return a;
        }
};
class child:public base
{
    public:
        int b;
        void readB()
        {
            std::cout<<"enter b value\n";
            std::cin>>b;
        }
        void display()
        {
            std::cout<<"display b : "<<b<<std::endl;
        }
        int getValue()
        {
            std::cout<<"get b : "<<std::endl;
            return b;
        }  
        void fromParent()
        {
            int x=a;
            std::cout<<x<<std::endl;
        }
};

int main()
{
   base  b1;
   child c1;
   b1.readA();
   b1.display();
   c1.readB();
   c1.display();
   c1.fromParent();

}