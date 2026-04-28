/*---------------------------------------------
Problem 4 — Rectangle List

Class: Rectangle
Members: length, width
Task:

Array of rectangles

Print area of all rectangles

Find largest area rectangle

Date : 20-02-2025
-----------------------------------------------*/
//!< header files
#include<iostream>

//!< namespace
namespace nAreaOfRactangle
{
    class cAreaOfRactangle
    {
        private:
            //!< array deimensDimensionions a[0]=length, a[1]=width.
            int length, width;
        public:
            void GetInput(int arrayId);
            void DispalyArea(int arrayId);
            int CalculateArea();
    };
    //!< taking input function
    void cAreaOfRactangle::GetInput(int arrayId)
    {
        std::cout<<"Data for "<<arrayId<<std::endl;
        std::cout<<"enter length and width:"<<std::endl;
        std::cin>>length>>width;
    }
    //!< display area function
    void cAreaOfRactangle::DispalyArea(int arrayId)
    {
        std::cout<<"---------------Display Data-----------------------"<<std::endl;
        std::cout<<"Area of  "<<arrayId<<" Array is :"<<CalculateArea()<<std::endl;
    }
    //!< calculate area functions
    int cAreaOfRactangle::CalculateArea()
    {
        int Area = length * width;
        return Area;
    }
}
int main()
{
    int members = 0;
    int maxArea = 0;
    std::cout<<"enter no of members"<<std::endl;
    std::cin>>members;

    nAreaOfRactangle::cAreaOfRactangle objArray[members];
    maxArea = objArray[0].CalculateArea();
    int largestRact=0;
    for(int i=0;i<members;i++)
    {
        objArray[i].GetInput(i+1);
        objArray[i].DispalyArea(i+1);
        if(maxArea < objArray[i].CalculateArea())
        {
            maxArea = objArray[i].CalculateArea();
            largestRact = i;
        }
    }
    std::cout<<"maximum area = "<<maxArea<<" and largest array is "<<largestRact+1<<std::endl;
}