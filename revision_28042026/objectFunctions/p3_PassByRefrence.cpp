//object pass by refrence

#include<iostream>

class cooler
{
    public:
        int blade;
        cooler(int b)
        {
            blade=b;
        }

};
void updateBlade(cooler &cool)
{
    int newBlade =0;
    std::cout<<"enter new blade\n";
    std::cin>>newBlade;
    cool.blade = newBlade;
}
int main()
{
    int currentBlade = 0;
    std::cout<<"enter current blade\n";
    std::cin>>currentBlade;

    cooler c1(currentBlade);
    updateBlade(c1);
    std::cout<<"new blades= "<<c1.blade<<std::endl;
}