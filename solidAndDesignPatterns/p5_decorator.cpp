//decorator: where we are add new interface without touch the old interface.

#include<iostream>
class coffee
{
    public:
        virtual void coffeeFun()
        {
           
        }
};
class Strongcoffee:public coffee
{
    public:
         void coffeeFun()
        {
           std::cout<<"strong cofee\n";
        }
};
class Normalcoffee:public coffee
{
    public:
         void coffeeFun()
        {
           std::cout<<"normal  cofee\n";
        }
};
class MilkDecorator
{
    private:
        coffee &c;
    public:
        MilkDecorator(coffee &c1):c(c1){}
        void coffeeFun()
        {
            c.coffeeFun();
            std::cout<<"milk added\n";
        }
};

int main()
{
    coffee c1;
    
    Strongcoffee s1;
    Normalcoffee n1;
    MilkDecorator m1(s1);
    MilkDecorator m2(n1);
    m1.coffeeFun();
    m2.coffeeFun();


}