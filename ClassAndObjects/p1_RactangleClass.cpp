//Rectangle Class
/************************************************************************** */
/*Create a class Rectangle with:

length

breadth
Member functions:

read()

area()

perimeter()*/
/************************************************************************** */
//!< header files.
#include<iostream>
//!< namespace defination, 
namespace nRactangle
{
    //!< class for ractangle.
    class cRactangle
    {
        private:
            //!< data members
            float fLength;
            float fBreadth;
        public:
            //!< member functions 
            void vReadDataFun();
            void vAreaFun();
            void vPerimeterFun();
    };
}
//!< Read Length and Breadth
void nRactangle::cRactangle::vReadDataFun()
{
    std::cout<<"enter length and breadth"<<std::endl;

    std::cin>>fLength>>fBreadth;
}
//!< Calculating area.
void nRactangle::cRactangle::vAreaFun()
{
    float fArea = fLength * fBreadth;
    std::cout<<"area of ractangle = "<<fArea<<std::endl;
}
//!< Calculating Perimeter
void nRactangle::cRactangle::vPerimeterFun()
{
    float fPerimeter = 2*(fLength + fBreadth);
    std::cout<<"area of ractangle = "<<fPerimeter<<std::endl;
}
//!< main Function
int main()
{
    //!< object creation.
    nRactangle::cRactangle objRactangle;

    //!< calling vReadDataFun function
    objRactangle.vReadDataFun();

    //!< calling vAreaFun function
    objRactangle.vAreaFun();

    //!< calling vPerimeterFun function  
    objRactangle.vPerimeterFun();
}