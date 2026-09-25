//pass by address.

#include<iostream>
class Vehicle
{
    public:
        int wheel;
        Vehicle(int w):wheel(w){};
};
void updateNewWheel(Vehicle *pV)
{
    int newWheel;
    std::cout<<"enter new no of wheels for update\n";
    std::cin>>newWheel;

    pV->wheel = newWheel;
}
int main()
{
   int wheels;
   std::cout<<"enter current wheel number\n";
   std::cin>>wheels;

   Vehicle V(wheels);

   updateNewWheel(&V);

   std::cout<<"new wheels "<<V.wheel<<std::endl;
}