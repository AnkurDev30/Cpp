/************************************************************************************************ */
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
/************************************************************************************************ */

//!< Header file
#include<iostream>

//!< constant defination
#define PI 3.14

//!< namespace define
namespace nCircle
{
    //!< class defination
    class cCircle
    {
       private:
            //!< data member
            unsigned int uiRadies;
            unsigned int uiArea ;
            unsigned int uiCrcumference;
        public:
            //!< member functions
            explicit  cCircle(unsigned int r):uiRadies(r){}
            void vArea();
            void vCircumference();
            void vDiaplayOutput();
    };
}
//!< function calculation circle area
void nCircle::cCircle::vArea()
{
    uiArea = (PI*uiRadies*uiRadies);
}
//!< function calculation circle circumference
void nCircle::cCircle::vCircumference()
{
    uiCrcumference = (2*PI*uiRadies);
}
//!< desipay outpur area and circumference
void nCircle::cCircle:: vDiaplayOutput()
{
    std::cout<<"area = "<<uiArea<<std::endl;
    std::cout<<"circumference = "<<uiCrcumference<<std::endl;
}
//!< main function
int main()
{
    nCircle::cCircle objCircle(3);
    objCircle.vArea();
    objCircle.vCircumference();
    objCircle.vDiaplayOutput();

}