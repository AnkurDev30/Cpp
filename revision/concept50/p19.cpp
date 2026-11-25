//Demonstrate static data members and static member functions.

#include<iostream>

class staticDataDemo 
{

    public:
        static int x;
        static void read()
        {
            std::cout<<x<<std::endl;
        }
};
int staticDataDemo::x =200;
int main()
{
    staticDataDemo::read();
}