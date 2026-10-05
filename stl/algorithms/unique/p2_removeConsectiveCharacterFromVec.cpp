//2. Remove consecutive duplicate characters
#include<algorithm>
#include<iostream>
#include<vector>

int main()
{
    std::vector<char>vec;

    char ab='A';
    for(int i=0;i<30;i++)
    {
        if(i%2==0)
        {
            if(i>10)vec.push_back('a');
            else vec.push_back('z');
        }
        else
        {
            vec.push_back(ab++);
        }
    }

    std::cout<<"before remove\n";
    for(auto m:vec)
    {
        std::cout<<m<<" ";
    }
    std::cout<<"\n";

    //sort.

    std::cout<<"sort\n";

    std::sort(vec.begin(),vec.end());
    std::cout<<"sorting\n";
    for(auto m:vec)
    {
        std::cout<<m<<" ";
    }
    std::cout<<"\n";   
    
    std::cout<<"find unique\n";

    auto u = std::unique(vec.begin(),vec.end());

    vec.erase(u,vec.end());

    std::cout<<"removing\n";
    for(auto m:vec)
    {
        std::cout<<m<<" ";
    }
    std::cout<<"\n";     
}