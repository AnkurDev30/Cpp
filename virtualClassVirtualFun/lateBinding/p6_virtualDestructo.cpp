#include<iostream>

class base 
{
    public:
        base()
        {
            std::cout<<"const\n";
        }
        virtual ~base()
        {
            std::cout<<"de-const\n";
        }
};
class derived:public base 
{
    public:
        derived()
        {
            std::cout<<"derived const\n";
        }
        ~derived()
        {
            std::cout<<"derived de-const\n";
        }
};

int main()
{
    base *p = new derived ();
    delete p;
}