#include <iostream>
using namespace std;

class Base
{
public:
    int a = 10;

protected:
    int b = 20;

private:
    int c = 30;
};

class Child : protected Base
{
public:
    void display()
    {
        cout << a << '\n';  // Allowed
        cout << b << '\n';  // Allowed
        // cout << c;       // Error
    }
};

int main()
{
    Child obj;
    obj.display();

    // cout << obj.a;  // Error
    // cout << obj.b;  // Error
}