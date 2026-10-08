
//abstraction program demo

#include<iostream>

class engin 
{
    public:
        virtual void fun()//we can his fun as normal fun and also redefine in derived class
        {
            std::cout<<"virtual fun\n";
        }
};
class petrol :public engin 
{
    public:
    void fun()override
    {
        std::cout<<"petrol car\n";
    }
};
class electric :public engin 
{
    public:
    void fun()override
    {
        std::cout<<"electric car\n";
    }
};
class abstrction 
{
    private:
        engin &e;
    public:
        abstrction(engin &e1):e(e1){}
        void tryAbstrction()
        {
            e.fun();
        }
};
int main()
{
    engin e1;
    e1.fun();


    petrol p;
    electric e;
    abstrction one(p);
    one.tryAbstrction();
    abstrction two(e);
    two.tryAbstrction();
}