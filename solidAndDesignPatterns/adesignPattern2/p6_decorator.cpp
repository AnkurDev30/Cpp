#include<iostream>

class cofee
{
    public:
        virtual void coffeeFun()
        {
            std::cout<<"making coffee\n";
        }
};
class withStrongSugar:public cofee
{
    void coffeeFun()
        {
            std::cout<<"cofee with sugar\n";
        }
};
class withcream:public cofee
{
    void coffeeFun()
        {
            std::cout<<"cofee with withcream\n";
        }
};

class decorator 
{
    private:
       cofee &c;
    public:
       decorator (cofee &c1):c(c1){}
       
       void decoratorFun()
       {
            c.coffeeFun();
            std::cout<<"decorated by nescafe\n";
       }
};

int main()
{
    withStrongSugar p1;
    withcream p2;
    decorator d1(p1);
    
    d1.decoratorFun();

    decorator d2(p2);
    d2.decoratorFun();
}