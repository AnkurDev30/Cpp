/*---------------------------------------------
Problem 7 — Dynamic Distance Objects

Class: Distance

Task:

allocate N objects dynamically

add all distances

display result

Date : 21-02-2025
-----------------------------------------------*/

#include<iostream>

namespace nDistance
{
    class cDistance
    {
        private:
            int distance;
        public:
            void takeDistance()obj[i].
            {
                std::cout<<"enter distance"<<std::endl;
                std::cin>>distance;
            }
            int getDistance()
            {
                return distance;
            }
            void displayDistnace()
            {
                std::cout<<"distance = "<<distance<<std::endl;
            }
    };
}
int main()
{
    int members = 0;
    int additionOfDistance = 0;
    std::cout<<"enter members"<<std::endl;
    std::cin>>members;

    nDistance::cDistance *obj;
    obj = new nDistance::cDistance [members];

    for(int i=0;i<members;i++)
    {
        obj[i].takeDistance();
    }
    for(int i=0;i<members;i++)
    {
        obj[i].displayDistnace();
    }
    for(int i=0;i<members;i++)
    {
        additionOfDistance += obj[i].getDistance();
    }
    std::cout<<"total distance = "<<additionOfDistance<<std::endl;

    delete[] obj;
}

