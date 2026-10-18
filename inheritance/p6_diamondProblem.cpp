#include<iostream>

class base 
{
    public:
        void show()
        {
            std::cout<<"base show\n";
        }
};
class derived1:virtual public base 
{
    public:
        void show()
        {
            std::cout<<"derived1 show\n";
        }
};
class derived2:virtual public base 
{
    public:
        void show()
        {
            std::cout<<"derived2 show\n";
        }
};
class derived3:public derived1,public derived2
{
    public:
       // void show()
       // {
       //     std::cout<<"derived3Fun \n";
       // }
};
int main()
{
    derived3 d1;
    d1.derived1::show();
}