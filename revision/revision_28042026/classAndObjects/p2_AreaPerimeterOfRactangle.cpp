//Class Rectangle (area, perimeter)
#include<iostream>
class cRactangleOperation
{
    private:
        int length;
        int width;
    public:
        void vInit();
        void vArea();
        void vPerimeter();
};
void cRactangleOperation::vInit()
{
    std::cout<<"enter length and width"<<std::endl;
    std::cin>>length>>width;
}
void cRactangleOperation::vArea()
{
    std::cout<<"area of ractangle : "<<length*width<<std::endl;
}
void cRactangleOperation::vPerimeter()
{
    std::cout<<"perimeter of ractangle : "<<2*(length+width)<<std::endl;
}
int main()
{
    cRactangleOperation objRactangleOpt;
    objRactangleOpt.vInit();
    objRactangleOpt.vArea();
    objRactangleOpt.vPerimeter();
}