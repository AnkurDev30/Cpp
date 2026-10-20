/*
Sort in ascending and descending order
Input: {5, 2, 8, 1, 3}.
Expected ascending: {1, 2, 3, 5, 8}.
Algorithms: std::sort(), std::greater<int>()
*/
#include<iostream>
#include<vector>
#include<algorithm>

int main()
{
    std::vector<int>vec;
    for(int i=0;i<10;i++)
    {
        vec.push_back(rand()%500);
    }
    std::cout<<"assending order sort and print\n";
    std::sort(vec.begin(),vec.end());
    for(auto m:vec)
    {
        std::cout<<m<<" ";
    }
    std::cout<<"\nsort desending order\n";
    std::sort(vec.begin(),vec.end(),std::greater<int>());
    for(auto m:vec)
    {
        std::cout<<m<<" ";
    }
    std::cout<<"\n";
}