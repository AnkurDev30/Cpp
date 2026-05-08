/**************************************************************************
Complex number addition

Class: Complex
Members: real, imag
Function: add(Complex) → return object
************************************************************************/

//!< header file.
#include<iostream>
#include<iostream>

//!< namespace defination.
namespace nComplexAddition
{
    //!< class defination
    class cComplexNumAdd
    {
        private://!< data member
            int realNum;
            int imagiNum;
        public:
            //!< member functions
            void vGetData(std::string name=" " );

            //!< complex number addition. 
            cComplexNumAdd AdditionComplex(cComplexNumAdd obj);

            //!< print data function, short defination inside of class 
            void vPrintData(std::string name = " ")
            {
                std::cout<<name<<" "<<realNum<<"+"<<imagiNum<<"i"<<std::endl;
            }

    };
    //!< member function defination outside of class.
    cComplexNumAdd cComplexNumAdd::AdditionComplex(cComplexNumAdd obj)
    {
        cComplexNumAdd objarg;
            objarg.realNum = this->realNum+obj.realNum;
            objarg.imagiNum = this->imagiNum+obj.imagiNum;
        return objarg;
    }
    //!< get fun defination
    void cComplexNumAdd::vGetData(std::string name )
    {
        std::cout<<"enter "<<name<<" real number"<<std::endl;
        std::cin>>realNum;
        std::cout<<"enter "<<name<<" imaginary number"<<std::endl;
        std::cin>>imagiNum;
    }
}
int main()
{
    //!< object creations
    nComplexAddition::cComplexNumAdd obj1;
    nComplexAddition::cComplexNumAdd obj2;
    nComplexAddition::cComplexNumAdd obj3;

    //!< collect data for object 1
    obj1.vGetData("object 1");
     //!< print data of object 1
    obj1.vPrintData("object 1");

    //!< collect data and print data of object 2
    obj2.vGetData("object 2");
    obj2.vPrintData("object 2");

    //!< apply addition
    obj3 = obj2.AdditionComplex(obj1);
    obj3.vPrintData("object 3");

}