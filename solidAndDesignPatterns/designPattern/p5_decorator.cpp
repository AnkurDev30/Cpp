#include<iostream>
class coffee
{
    public:
        virtual void coffeeMak()
        {

        }
};
class NormalCoffee:public coffee
{
    public:
        void coffeeMak()
        {
            std::cout<<"normal cofee\n";
        }
};
class hot:public coffee
{
    public:
        void coffeeMak()
        {
            std::cout<<"hot cofee\n";
        }
};
class decorator
{
    private:
        coffee &c;
    public:
        decorator(coffee &c1):c(c1){}
        void decoratorFun()
        {
            c.coffeeMak();
            std::cout<<"added milk\n";
        }
};
int main()
{
   hot h1;
   decorator d1(h1);
   NormalCoffee n1;
   decorator d2(n1);
   d1.decoratorFun();
   d2.decoratorFun();
}