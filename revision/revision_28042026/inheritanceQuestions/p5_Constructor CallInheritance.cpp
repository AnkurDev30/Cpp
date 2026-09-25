//Constructor call in inheritance
#include<iostream>
class base {
    public:
        base()
        {
            std::cout<<"base class constructor"<<std::endl;
        }
};
class derived:public base {
    public:
        derived()
        {
            std::cout<<"derived class constructor"<<std::endl;
        }
};
int main()
{
    derived d1;
    
}