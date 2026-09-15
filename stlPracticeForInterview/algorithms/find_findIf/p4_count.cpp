#include<iostream>
#include<vector>
#include<algorithm>
int main()
{
    std::vector<int>vec;
    for(int i=0;i<20;i++)
    {
        vec.push_back(i);
    }
    for(auto f:vec)
    {
        std::cout<<f<<std::endl;
    }
    int couuntCheck = std::count(vec.begin(),vec.end(),6);
    std::cout<<"total 6 = "<<couuntCheck<<std::endl;
}