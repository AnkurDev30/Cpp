#include<iostream>//it has relation ship

class petrol 
{
    public:
        void vehicleFuel()
        {
            std::cout<<"petrol car\n";
        }
};
class electric 
{
    public:
        void vehicleFuel()
        {
            std::cout<<"electric car\n";
        }
};

class vehicle 
{
    private:
       petrol p1;
       electric e1;
    public:
        void vehicleFuel(int type)
        {
            if(type ==1)
            {
                p1.vehicleFuel();
            }
            else if(type ==2)
            {
                e1.vehicleFuel();
            }
            else{

            }
        }
};
int main()
{
    int type;
    std::cout<<"select type\n1. petrol\n2.electric\n";
    std::cin>>type;
    vehicle v1;
    v1.vehicleFuel(type);
}