/*
Program 6: Remove duplicate elements
- Create a vector containing duplicate elements.
- Remove duplicates.
- Display unique elements.
*/

#include<iostream>

#include<vector>

#include<algorithm>

#include<cstdlib>
int main()
{
    std::vector<int>vec;
    
    std::cout<<"fill the vector\n";

    for(int i=0;i<10;i++)
    {
        if(i%3 == 0)
        {
            vec.push_back(5);
        }
        else
        {
            vec.push_back(rand()%100);
        }
    }

    std::cout<<"print the vector\n";

    for(int i=0;i<10;i++)
    {
        std::cout<<vec[i]<<" ";
    }
    std::cout<<"\n";

    std::sort(vec.begin(),vec.end());

    auto dup = std::unique(vec.begin(),vec.end());

    vec.erase(dup,vec.end());

    std::cout<<"print the vector remove duplicate\n";

    for(int i=0;i<vec.size();i++)
    {
        std::cout<<vec[i]<<" ";
    }
    std::cout<<"\n";
}