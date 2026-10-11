#include<iostream>

class base 
{
    public:
        base()
        {
            std::cout<<"base class contructor\n";
        }
        virtual ~base()
        {
            std::cout<<"base class destructor\n";
        }
};
class derived :public base
{
    public:
        derived()
        {
            std::cout<<"derived class contructor\n";
        }
        ~derived()
        {
            std::cout<<"derived class destructor\n";
        }
};
int main()
{
    
base *p=new derived();

delete p;
    
}