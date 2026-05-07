/**
🧱 2. Rectangle Area
Requirements:

Constructor takes:

length
breadth

Calculate and print area.
*/

#include<iostream>
class racArea
{
    private :
        int length ;
        int breadth;
    public:
        racArea()
        {
            std::cout<<"enter length"<<std::endl;
            std::cin>>length;

            std::cout<<"enter breadth"<<std::endl;
            std::cin>>breadth;
        }
        void calcAreaPrint()
        {
            int area = length*breadth;
            std::cout<<"area = "<<area<<std::endl;
        }
};
int main()
{
    racArea obj;
    obj.calcAreaPrint();
}