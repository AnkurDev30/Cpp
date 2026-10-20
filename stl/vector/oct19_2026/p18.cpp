/**
Binary search in a sorted vector
Check whether 7 exists in {1, 3, 5, 7, 9}.
Algorithm: std::binary_search(); data must be sorted.
*/

#include<iostream>
#include<vector>
#include<algorithm>

int main()
{
    std::vector<int>vec;
    for(int i=0;i<10;i++)
    {
        vec.push_back(rand()%100);
    }
    std::cout<<"print vector\n";

    for(auto m:vec)
    {
        std::cout<<m<<" ";
    }
    std::cout<<"\n";

    std::sort(vec.begin(),vec.end());

    int val=0;
    std::cout<<"enter value\n";
    std::cin>>val;
    bool data = std::binary_search(vec.begin(),vec.end(),val);

    if(data==true)
    {
        std::cout<<"data find\n";
    }
    else
    {
        std::cout<<"data not find\n";
    }
}