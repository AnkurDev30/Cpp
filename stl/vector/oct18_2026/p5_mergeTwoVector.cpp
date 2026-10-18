#include<iostream>
#include<vector>
#include<algorithm>

int main()
{
    std::vector<int>vec;
    std::vector<int>vec2;

    for(int i=0;i<10;i++)
    {
        if(i%2==0)
        {
            vec.push_back(rand()%200);
            vec2.push_back(7+i);
        }
        else
        {
            vec2.push_back(rand()%200);
            vec.push_back(17+i);          
        }
    }
    std::cout<<"vector 1\n";
    for(auto m:vec)
    {
        std::cout<<m<<" ";
    }
    std::cout<<"\n";
    std::cout<<"vector 2\n";
    for(auto m:vec2)
    {
        std::cout<<m<<" ";
    }
    std::cout<<"\n";

    vec.insert(vec.end(),vec2.begin(),vec2.end());

    std::cout<<"vector after merge \n";
    for(auto m:vec)
    {
        std::cout<<m<<" ";
    }
    std::cout<<"\n";
}