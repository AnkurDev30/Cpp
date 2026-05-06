//there just we learn how to share static member by object.
#include<iostream>
class Car
{
    public:
        static int count;
        Car()
        {
            count++;
        }
};
int Car::count = 0;
int main()
{
    Car c1,c2,c3;
    std::cout<<"count = "<<c1.count<<std::endl;

}