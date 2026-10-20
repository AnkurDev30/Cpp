/**
Merge two vectors manually
Combine {1, 2, 3} and {4, 5, 6} into one vector using loops and push_back().
Learn: multiple vectors, traversal, insertion
*/

#include<iostream>
#include<vector>
#include<algorithm>


int main()
{
    std::vector<int>vec;

    std::vector<int>vec2;

    for(int i=0;i<10;i++)
    {
        vec.push_back(rand()%100);
        vec2.push_back(rand()%200);
    }

    std::cout<<"print vector 1\n";

    for(auto m :vec)
    {
        std::cout<<m<<" ";
    }
    std::cout<<"\n";
    std::cout<<"print vector 2\n";

    for(auto m :vec2)
    {
        std::cout<<m<<" ";
    }
    std::cout<<"\n";
    std::cout<<"merge vector\n";

    vec.insert(vec.end(),vec2.begin(),vec2.end());

    std::cout<<"print vector after merge\n";

    for(auto m :vec)
    {
        std::cout<<m<<" ";
    }
    std::cout<<"\n";   
}