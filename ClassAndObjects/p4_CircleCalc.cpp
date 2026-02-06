//!< 4. Circle Class

//!< Create a class Circle with:
//!< 
//!< radius
//!< 
//!< Member functions:
//!< 
//!< read()
//!< 
//!< area()
//!< 
//!< circumference()
#define PI 3.14
#include<iostream>
namespace nCircle
{
    class cCircle
    {
       private:
            unsigned int uiRadies;
            unsigned int uiArea ;
            unsigned int uiCrcumference;
        public:
            explicit  cCircle(unsigned int r):uiRadies(r){}
            void vArea();
            void vCircumference();
            void vDiaplayOutput();
    };
}
void nCircle::cCircle::vArea()
{
    uiArea = (PI*uiRadies*uiRadies);
}
void nCircle::cCircle::vCircumference()
{
    uiCrcumference = (2*PI*uiRadies);
}
void nCircle::cCircle:: vDiaplayOutput()
{
    std::cout<<"area = "<<uiArea<<std::endl;
    std::cout<<"circumference = "<<uiCrcumference<<std::endl;
}
int main()
{
    nCircle::cCircle objCircle(3);
    objCircle.vArea();
    objCircle.vCircumference();
    objCircle.vDiaplayOutput();

}