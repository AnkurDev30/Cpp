//in factory designe creational designe pattern where we create a object from 
// peice code and then it will be use for object.

#include<iostream>

class engine 
{
    public:
        virtual void start()
        {
            std::cout<<"start\n";
        }
        virtual ~engine()
        {

        }
};

class petrolCar:public engine
{
    public:
        void start()
        {
            std::cout<<"petrol car start start\n";
        }       
};

class electricCar:public engine
{
    public:
        void start()
        {
            std::cout<<"electric car start start\n";
        }       
};

class factory
{
    public:
        engine &e;
    public:
        static engine* factoryFun (int type)
        {
            if(type==1)
            return new petrolCar;
            else if(type ==2 )
            return new electricCar;

            return nullptr;
        }
};

int main()
{
   engine *e1= factory::factoryFun(1);
   e1->start();
}