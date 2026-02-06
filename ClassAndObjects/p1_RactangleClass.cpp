//Rectangle Class

/*Create a class Rectangle with:

length

breadth
Member functions:

read()

area()

perimeter()*/

#include<iostream>
namespace nRactangle
{
    class cRactangle
    {
        private:
            float fLength;
            float fBreadth;
        public:
            void vReadDataFun();
            void vAreaFun();
            void vPerimeterFun();
    };
}
void nRactangle::cRactangle::vReadDataFun()
{
    std::cout<<"enter length and breadth"<<std::endl;

    std::cin>>fLength>>fBreadth;
}
void nRactangle::cRactangle::vAreaFun()
{
    float fArea = fLength * fBreadth;
    std::cout<<"area of ractangle = "<<fArea<<std::endl;
}
void nRactangle::cRactangle::vPerimeterFun()
{
    float fPerimeter = 2*(fLength + fBreadth);
    std::cout<<"area of ractangle = "<<fPerimeter<<std::endl;
}
int main()
{
    nRactangle::cRactangle objRactangle;
    objRactangle.vReadDataFun();
    objRactangle.vAreaFun();
    objRactangle.vPerimeterFun();
}