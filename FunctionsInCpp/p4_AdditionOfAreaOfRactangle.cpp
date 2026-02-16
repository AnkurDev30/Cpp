/*********************************************************** 
4. Rectangle area addition

Class: Rectangle
Members: length, width
Function: addArea(Rectangle) → return object

Date : 16 Feb 2025.
************************************************************/

//!< header file display.
#include <iostream>

//!< namespace declaration.
namespace nRactangleArea
{
    //!< class defination
    class cRactangleArea
    {
        private:
            int length;
            int width;
            int Area;
        public:
            cRactangleArea():length(0),width(0){}
            explicit cRactangleArea(int a, int b):length(a),width(b){}
            int getArea()
            {
                return Area;
            }
            
            cRactangleArea objReturnAdditionOfArea(cRactangleArea obj);
    };
    //!< function define outside of class
    cRactangleArea cRactangleArea::objReturnAdditionOfArea(cRactangleArea obj)
    {
        //!< object creation via default construction
        cRactangleArea objReturn;
        
        objReturn.Area = (obj.length*obj.width)
                        +(this->length*this->width);

        //!< return object.
        return objReturn;
    }
}
//!< main function defination.
int main()
{
    //!< local variables.
    int length  ;
    int width   ;

    //!<    object creation.
    nRactangleArea::cRactangleArea ObjectTotalArea;

    //!<    take input for first ractangle.
    std::cout<<"enter length and width for first ractangle"<<std::endl;
    std::cin>>length>>width;

    //!< first ractangle.
    nRactangleArea::cRactangleArea ract1(length,width);

    //!<    take input for second ractangle.
    std::cout<<"enter length and width for second ractangle"<<std::endl;
    std::cin>>length>>width;

    //!<    second ractangle.
    nRactangleArea::cRactangleArea ract2(length,width);

    //!<    addition function for total area
    ObjectTotalArea = ract1.objReturnAdditionOfArea(ract2);

    //!<    result display.
    std::cout<<"total area "<<ObjectTotalArea.getArea()<<std::endl;

}