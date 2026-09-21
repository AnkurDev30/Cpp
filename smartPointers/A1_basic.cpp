/**. Basic unique_ptr with int ⭐ */

#include<iostream>
#include<memory>
#include<list>
#include<vector>
class ab
{
    public:
        std::unique_ptr<int> p=std::make_unique<int>(100);
        void printData()
        {
            std::cout<<*p<<std::endl;
        }
};
int main()
{
    std::vector<ab>vec;
   // std::list<vec>l1;


    for(int i=0;i<5;i++)
    {
        ab a1;
        vec.push_back(std::move(a1));
    }
     for(int i=0;i<5;i++)
     {
        vec[i].printData();
     }
}