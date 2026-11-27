/**
Program 8: Merge two sorted vectors
- Create two sorted vectors.
- Merge them into a third vector.
- Keep the final vector sorted.
- Remove duplicates from the result.
*/

#include<iostream>

#include<vector>

#include<algorithm>

#include<cstdlib>

int main()
{
    std::vector<int>vec1;
    std::vector<int>vec2;
    std::vector<int>vec3;

    std::cout<<"fill vector\n";

    for(int i=0;i<10;i++)
    {
        vec1.push_back(rand()%100);
        vec2.push_back(rand()%100);
    }

    std::cout<<"print vector 1\n";
    for(int i=0;i<vec1.size();i++)
    {
        std::cout<<vec1[i]<<" ";
    }
    std::cout<<"\n";
    std::cout<<"print vector 2\n";
    for(int i=0;i<vec2.size();i++)
    {
        std::cout<<vec2[i]<<" ";
    }
    std::cout<<"\n";

    
    std::sort(vec1.begin(),vec1.end());
    std::sort(vec2.begin(),vec2.end());

    for(int i=0;i<vec1.size();i++)
    {
        vec3.push_back( vec1[i]);
    }

    std::cout<<"print vector 3\n";
    vec3.insert(vec3.end(),vec2.begin(),vec2.end());
    std::sort(vec3.begin(),vec3.end());


    auto uni = std::unique(vec3.begin(),vec3.end());

    vec3.erase(uni,vec3.end());
    for(int i=0;i<vec3.size();i++)
    {
        std::cout<<vec3[i]<<" ";
    }
    std::cout<<"\n";


}