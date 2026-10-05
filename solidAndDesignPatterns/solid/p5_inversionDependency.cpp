//a high level class should not depens upon low level class
//and low levele class should not depens upon high level class 
//they should depens upon the abstarction.

#include<iostream>

class engine
{
    public:
       virtual void fun()
        {
            std::cout<<"fun\n";
        }
};
class petrolE:public engine
{
    public:
       virtual void fun()
        {
            std::cout<<"petrol engine\n";
        }
};
class electricE:public engine
{
    public:
       virtual void fun()
        {
            std::cout<<"electric engine\n";
        }
};
class car
{
    private:
        engine &e;
    public:
        car (engine &e1):e(e1){}
        void fun()
        {
            e.fun();
        }

};

int main()
{
    petrolE p1;
    car c1(p1);
    c1.fun();
    electricE e1;
    car c2(e1);
    c2.fun();
}