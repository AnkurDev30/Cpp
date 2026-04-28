/*---------------------------------------------
Problem 8 — Dynamic Rectangle Objects

Class: Rectangle

Task:

allocate using new[]

compute total area

Date : 21-02-2025
-----------------------------------------------*/

#include<iostream>

namespace nRactangleArea
{
    class cRactangleArea
    {
        private:
            int len,wid;
        public:
            void getDimensions()
            {
                std::cout<<"enter dimensions (length and width):"<<std::endl;
                std::cin>>len>>wid;
            }
            int calculateArea()
            {
                return len*wid;
            }
            void displayArea(int arrayMember)
            {
                std::cout<<"Area of ractangle no. : "<<calculateArea()<<std::endl;
            }
    };
}
int main()
{
    int members = 0;
    int totalArea = 0;
    std::cout<<"enter members"<<std::endl;
    std::cin>>members;

    nRactangleArea::cRactangleArea *pObj;
    pObj = new nRactangleArea::cRactangleArea[members];

    for(int i = 0;i<members;i++)
    {
        pObj[i].getDimensions();
    }
    std::cout<<"display data : "<<std::endl;
    for(int i = 0;i<members;i++)
    {
        pObj[i].displayArea(i);
    }

   
    for(int i = 0;i<members;i++)
    {
       totalArea +=  pObj[i].calculateArea();
    }

    std::cout<<"total area : "<<totalArea<<std::endl;


    delete[] pObj;
}


