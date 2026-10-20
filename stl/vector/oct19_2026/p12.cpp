/*
Find maximum and minimum
Input: {12, 5, 30, 7, 2}.
Expected minimum: 2, maximum: 30.
Algorithms: std::min_element(), std::max_element()
*/
#include<iostream>
#include<vector>
#include<algorithm>

int main()
{
    std::vector<int>vec;

    for(int i=0;i<10;i++)
    {
        vec.push_back(rand()%200);
    }

    std::cout<<"print vactor\n";

    for(auto m:vec)
    {
        std::cout<<m<<" "; 
    }
    std::cout<<"\n";

    auto min = std::min_element(vec.begin(),vec.end());
    std::cout<<"minium  : "<<*min<<std::endl;
    auto max = std::max_element(vec.begin(),vec.end());
    std::cout<<"maximum  : "<<*max<<std::endl;
}