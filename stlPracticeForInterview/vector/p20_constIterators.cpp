//const iterators
#include<iostream>
#include<vector>
int main()
{
    std::vector<int>vec;
    for(int i=0;i<10;i++)
    {
        vec.push_back(i*3);
    }
    for(std::vector<int>::const_iterartor it=vec.begin();it!=vec.end();it++)
    {
        std::cout<<"data = "<<*it<<" "<<std::endl;
        if(it==vec.end())
        {
            std::cout<<std::endl;
        }
    }
}