#include<iostream>

class base 
{
    public:
        base()
        {
            std::cout<<"base class cot\n";
        }
        base(int xx)
        {
            std::cout<<"base class parmetrized cot = "<<xx<<std::endl;
        }
};
class der : public base 
{
    public:
        der()
        {
            std::cout<<"derived class cot\n";
        }
        der(int x):base(x)
        {
            std::cout<<"derived class const : "<<x<<std::endl;
        }
};
int main()
{
    der y;//base -->der
    der  z(10);//base class ->10, der class -> 10
}