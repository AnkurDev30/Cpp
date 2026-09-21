//startegy behavior:
//when object can change behave or functionality at runtime 
//its call stratgy behavior system
//its close to OCP.

#include<iostream>
class Engine 
{
    public:
        virtual void fun()
        {

        }
        virtual ~Engine()
        {

        }
};
class petrol  :public Engine
{
    public:
        void fun()
        {
            std::cout<<"petrol car \n";
        }
       
};
class electric: public Engine 
{
    public:
        void fun()
        {
            std::cout<<"electric car\n";
        }    
};

class Car 
{
    private:
        Engine &e;
    public:
        Car(Engine &e1):e(e1){

        }
        void fun()

            e.fun();
        }
};

int main()
{
    petrol p1;
    electric p2;
     Car c1(p1);
     c1.fun();
     Car c2(p2);
     c2.fun();

}