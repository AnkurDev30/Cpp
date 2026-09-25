//dependency inversion principal

#include<iostream>

class Engine
{
    public:
        virtual void start()
        {
            std::cout<<"start process\n";
        }
        virtual ~Engine()
        {

        }
};

class PetrolEngine:public Engine{

    public:
        void start()
        {
            std::cout<<"petrol engin\n";
        }     
};
class ElectricEngine:public Engine{

    public:
        void start()
        {
            std::cout<<"electric engin\n";
        }     
};

class Car
{
    private:
       Engine &e;
    public:
        Car(Engine &e1) : e(e1)
        {

        }
        void start()
        {
            e.start();
        }
};

int main()
{
    PetrolEngine p1;
    ElectricEngine e1;

    Car c1(p1);
    Car c2(e1);
    c1.start();
    c2.start();
}