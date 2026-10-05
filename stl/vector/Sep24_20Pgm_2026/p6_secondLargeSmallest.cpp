/**
    Second largest
    Second smallest
*/
#include<iostream>
#include<vector>
#include<algorithm>

int main()
{
    std::vector<int>vec;

    //enter data

    for(int i=0;i<10;i++)
    {
        vec.push_back(rand()%100);
    }
    std::cout<<"print data\n";

    for(auto m:vec)
    {
        std::cout<<m<<" ";
    }
    std::cout<<"\n";

    std::sort(vec.begin(),vec.end());

    auto f = std::unique(vec.begin(),vec.end());
    vec.erase(f,vec.end());
    std::cout<<"second largest = "<<vec[vec.size()-2]<<std::endl;
    std::cout<<"second smallest = "<<vec[1]<<std::endl;
}