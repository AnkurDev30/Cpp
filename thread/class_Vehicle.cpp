
#include<iostream>
class Vehicle
{
public:
    virtual void start()
    {
       
    }
};

class petrol:public Vehicle
{
    public :
        void start() override
        {
            std::cout <<"i am petrol\n";
        }
};
class Diesel:public Vehicle
{
    public :
        void start() override
        {
            std::cout <<"i am Diesel\n";
        }
};
class Electric:public Vehicle
{
    public :
        void start() override
        {
            std::cout <<"i am Electric\n";
        }
};

int main()
{
    int a;
    std::cout<<"select fule\n";
    std::cin>>a;
    Vehicle *v;
    petrol p;
    Diesel d;
    Electric e;
    switch(a)
    {
        case 1:
           
           
           v= &p;
           v->start();
        break;
        case 2:
          
           
           v= &d;
           v->start();
        break;
        case 3:
           
           v=&e;
           v->start();
        break;
    }
}