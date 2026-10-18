#include<iostream>
using namespace std;
class control 
{
    public:
        control()
        {
            calculate();
            cout<<"constructor\n";
        }
        void calculate()
        {
            display();
            cout<<"calculate\n";
        }
        void display()
        {
            std::cout<<"display\n";
        }
};
int main()
{
    control c1;
    return 0;
}