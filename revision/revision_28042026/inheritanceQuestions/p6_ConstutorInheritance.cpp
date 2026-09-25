//Constructor call in inheritance
#include<iostream>
class base {
    public:
        base()
        {
            std::cout<<"base class constructor"<<std::endl;
        }
        ~base()
        {
            std::cout<<"base class desturtor"<<std::endl;
        }
};
class derived:public base {
    public:
        derived()
        {
            std::cout<<"derived class constructor"<<std::endl;
        }
        ~derived()
        {
            std::cout<<"derived class desturtor"<<std::endl;
        }
};
int main()
{
    derived d1;
    
}