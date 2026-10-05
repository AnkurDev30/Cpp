===> Here are 5 selective namespace practice programs, from basic to *interview level*.


1. Basic namespace
Create a namespace Math containing:
int add(int a, int b);
int subtract(int a, int b);

Call both functions from main() using:
Math::add(...)
Math::subtract(...)

Practice: namespace declaration and scope resolution ::.
/********************************************************************************/

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

/********************************************************************************/

3. Namespace variable + function
Create namespace Employee containing:
int id;
std::string name;

void display();

Initialize the variables from main() and call display().
Practice: Accessing namespace-level variables and functions.


/********************************************************************************/
4. Nested namespace ⭐⭐
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


/********************************************************************************/
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


/********************************************************************************/
Interview concept: Understand how namespaces can contain classes with identical names without conflict.
⭐ Bonus challenge
Try this after completing the 5:
using namespace Petrol;

Then see what happens if you also write:
using namespace Electric;

and try:
Car c;

This will help you understand why blindly using using namespace can create ambiguity.