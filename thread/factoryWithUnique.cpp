#include<iostream>
#include<memory>

class Engine 
{
    public:
       virtual void start()
       {
        std::cout<<"fun\n";
       }
       virtual ~Engine()
       {

       }
};
class Car:public Engine
{
    public:
        void start()
        {
            std::cout<<"car start\n";
        }
};
class Bike:public Engine 
{
    public:
        void start()
        {
            std::cout<<"bike start\n";
        } 
};

class Factory
{
    public:
        static std::unique_ptr<Engine> factory(int type)
        {
            if(type==1)
            {
                std::unique_ptr<Car>p=std::make_unique<Car>();
                return p;
            }
            else
            {
                std::unique_ptr<Bike>p=std::make_unique<Bike>();
                return p;
            }

            return nullptr;
        }
};

int main()
{
    int type=1;
    std::unique_ptr<Engine>e = Factory::factory(type);

    e->start();
}