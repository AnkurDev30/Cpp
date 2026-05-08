/*
🧱 1. Car and Engine System
Requirements:
Create class: Engine
    engine number
    horsepower

Create class:Car
    car name
    Engine object inside Car
    Features:

input car details
print full details
*/

#include<iostream>
class engine
{
    private:
        int engineNumber;
        int horsePower;
    friend class car;
};
class car
{
    private:
        std::string name;
        engine e1;
    public:
        void getData();
        void printData();
};
void car::getData()
{
    std::cout<<"enter engine number\n";
    std::cin>>e1.engineNumber;
    std::cout<<"enter horse power of engine\n";
    std::cin>>e1.horsePower;
    std::cout<<"enter car name\n";
    std::cin>>name;
}
void car::printData()
{
    
    std::cout<<"engine number: "<<e1.engineNumber<<std::endl;
    std::cout<<"horse power of engine: "<<e1.horsePower<<std::endl;
    std::cout<<"car name:"<<name<<std::endl;
}
int main()
{
    car c1;
    c1.getData();
    c1.printData();
    return 0;
}