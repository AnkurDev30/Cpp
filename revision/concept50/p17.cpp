//Demonstrate constructor and destructor execution order in multilevel inheritance.

#include<iostream>

class base 
{
    public:
        base()
        {
            std::cout<<"base constructor\n";
        }
        ~base()
        {
            std::cout<<"base destructor\n";
        }       
};
class one:public base 
{
    public:
        one()
        {
            std::cout<<"one constructor\n";
        }
        ~one()
        {
            std::cout<<"one destructor\n";
        }       
};
class two:public one 
{
    public:
        two()
        {
            std::cout<<"two constructor\n";
        }
        ~two()
        {
            std::cout<<"two destructor\n";
        }       
};

int main()
{
    two t1;

}