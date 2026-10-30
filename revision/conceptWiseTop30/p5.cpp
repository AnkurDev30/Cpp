//Implement runtime polymorphism using a base-class pointer

#include<iostream>
#include<memory>
class base 
{
    public:
        virtual void fun()
        {
            std::cout<<"hello\n";
        }
};
class derived : public base 
{
    public:
        void fun()
        {
            std::cout<<"hye\n";
        }
};
int main()
{
    std::unique_ptr<base>p = std::make_unique<derived>();
    p->fun();
}