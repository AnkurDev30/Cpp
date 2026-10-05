/*
2. Same function name in two namespaces ⭐
Create:
namespace A
{
    void display();
}

namespace B
{
    void display();
}

Both should print different messages.
Call:
A::display();
B::display();

Goal: Understand how namespaces avoid name conflicts.
*/

#include<iostream>

namespace A 
{
    void display()
    {
        std::cout<<"namespace A--> hye\n";
    }
}
namespace B
{
    void display()
    {
        std::cout<<"namespace B--> Bye\n";
    }
}

int main()
{
    A::display();
    B::display();
}