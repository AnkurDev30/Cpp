/*
5. Namespace + class with same function name ⭐⭐⭐
Create two namespaces:
namespace Petrol
{
    class Car
    {
    public:
        void start();
    };
}

namespace Electric
{
    class Car
    {
    public:
        void start();
    };
}

Create objects:
Petrol::Car p;
Electric::Car e;

Then call:
p.start();
e.start();
*/

#include<iostream>
namespace petrol 
{
    class car 
    {
        public:
            void display()
            {
                std::cout<<"petrol car\n";
            }
    };
}
namespace electric 
{
    class car 
    {
        public:
            void display()
            {
                std::cout<<"electric car\n";
            }
    };
}

int main()
{
   petrol::car c1;
   electric::car e1;

   c1.display();
   e1.display();
}