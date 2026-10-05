/*4. Nested namespace ⭐⭐
Create:
namespace Company
{
    namespace Hardware
    {
        void display();
    }

    namespace Software
    {
        void display();
    }
}

Call both functions.
Then try the C++17 style:
namespace Company::Hardware
{
    void display();
}

Practice: Nested namespaces and modern C++ syntax.

Note* now not focus on c++17
*/

#include<iostream>
namespace company 
{
    namespace hw 
    {
        void display()
        {
            std::cout<<"hw display\n";
        }
    }
    namespace sw 
    {
        void display()
        {
            std::cout<<"sw display\n";
        }
    }
}

int main()
{
    company::hw::display();
    company::sw::display();
}