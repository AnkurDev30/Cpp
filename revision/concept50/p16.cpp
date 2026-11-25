//Demonstrate virtual destructor using a base pointer.

#include<iostream>

class base 
{
    public:
        virtual ~base()
        {
            std::cout<<"base class destructor\n";
        }
};
class child : public base
{
    public:
        ~child()
        {
             std::cout<<"child class destructor\n";
        }
};

int main()
{
 
   base * p = new child();
   delete p;

}