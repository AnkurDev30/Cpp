//when we add new feature to existing object without modifying the existing or orignal class

#include<iostream>

class coffee
{
    public:
       virtual void make()
       {

       }
};
class SimpleCofee:public coffee
{
    public:
        void make()
        {
            std::cout<<"simple coffee\n";
        }
};
class Capacino:public coffee
{
    public:
        void make()
        {
            std::cout<<"Hot coffee\n";
        }
};
class MilkDecorator
{
    private:
        coffee &c;
    public:
        MilkDecorator(coffee &c1):c(c1){

        }

        void make()
        {
            c.make();
            std::cout<<"+ milk\n";
        }

};

int main()
{
    coffee c2;

    SimpleCofee s1;
    Capacino CC1;
    MilkDecorator ca(CC1);
    ca.make();

}