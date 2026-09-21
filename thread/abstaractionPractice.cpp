#include<iostream>

class Engine 
{
    public:
        virtual void start()
        {

        }
        virtual ~Engine()
        {

        }
};
class Petrol:public Engine
{
    public:
        void start()
        {
            std::cout<<"petrol\n";
        }
};
class Electric:public Engine
{
    public:
        void start()
        {
            std::cout<<"electric\n";
        }
};


class Car
{
    private:
        Engine &e1;
    public:
        Car(Engine &e2):e1(e2){}

        void start()
        {
            e1.start();
        }
};

int main()
{
    Petrol p1;
    Electric e1;

    Car c1(p1);
    c1.start();

    Car c2(e1);
    c2.start();   
}