//multi level
/*
multilevel

class base 
{}
class child:base
{
    //child have all base feture
};
class grandchild:child
{
    //child+base feture
}


multiple

class A

class B

class c:A,B

*/
#include<iostream>

class engine
{

    public:
        void engineFun()
        {
            std::cout<<"Engine type: 4strock\n";
        }
};
class petrol : public engine
{
    public:
        void petrolCar()
        {
            std::cout<<"fuel : petrol \n";
          //  engineFun();
        }
};
class car :public petrol
{
    public:
        void carFunc()
        {
            petrolCar();
        }
};

int main()
{
    car c1;
    c1.carFunc();
    c1.engineFun();
}