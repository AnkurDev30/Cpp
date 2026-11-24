#include<iostream>

class base 
{
    public:
        int x=10;

        void show()
        {
            std::cout<<"base x = "<<x<<std::endl;
        }
};

class derived : public base
{
    public:

        int x =20;
        
        void display()
        {
            std::cout<<"derived x = "<<x<<std::endl;
        }
};

int main()
{
    derived d;
    base b = d;

    b.show();
    b.display();//give error
}