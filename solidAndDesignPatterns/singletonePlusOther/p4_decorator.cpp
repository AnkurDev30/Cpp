#include<iostream>

class cofee
{
    public:
        virtual void coffeeFun()
        {

        }
        virtual ~cofee()=default;
};
class milk:public cofee
{
    public:
        void coffeeFun()
        {
            std::cout<<"added milk\n";
        }
};
class sugar:public cofee
{
    public:
        void coffeeFun()
        {
            std::cout<<"added sugar\n";
        }
};
class decorator 
{
    private:
        cofee &c1;
    public:
       decorator(cofee &c2):c1(c2){}
       
       void decoratorFun()
       {
            c1.coffeeFun();
            std::cout<<"Add cream decorator\n";
       }
};
int main()
{
    milk m1;
    sugar s1;

    decorator d1(m1);

    d1.decoratorFun();

    decorator d2(s1);
    d2.decoratorFun();
}