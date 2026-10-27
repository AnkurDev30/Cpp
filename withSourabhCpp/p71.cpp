// make abstraction class via inheritance and virtual funtion.

#include<iostream>

class engine 
{
    public:
        virtual void fun()
        {
            std::cout<<"engine\n";
        } 
};
class petrol :public engine
{
    public:
         void fun()
        {
            std::cout<<"petrol\n";
        } 
};
class electric :public engine
{
    public:
         void fun()
        {
            std::cout<<"electric\n";
        } 
};
class hydrozen:public engine
{
    public:
         void fun()
        {
            std::cout<<"hydrozen\n";
        } 
};
class abstract 
{
    private:
        engine &e;
    public:
        abstract(engine &e1):e(e1)
        {
            
            //std::cout<<"construtor\n";
        }
        void abstacrtionFun()
        {
            e.fun();
        }
};
int main()
{
    petrol p1;
    abstract o1(p1);
    o1.abstacrtionFun();

    electric e1;
    abstract o2(e1);
    o2.abstacrtionFun();

    hydrozen h1;
    abstract o3(h1);
    o3.abstacrtionFun();   

}