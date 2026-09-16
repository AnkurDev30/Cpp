//Remove all occurrences of 5
#include<iostream>
#include<vector>
#include<algorithm>

int main()
{
    int v;
    std::vector<int>vec;

    for(int i=0;i<50;i++)
    {
        if(i%6==0)
        {
            vec.emplace_back(5);
        }
        else
        {
            vec.emplace_back(i);
        }
    }
    std::cout<<"before remove 5\n";  
    
    for(auto m:vec)
    {
        std::cout<<m<<" ";
    }
    std::cout<<"\n";

    vec.erase(std::remove(vec.begin(),vec.end(),5),vec.end());

    std::cout<<"after remove 5\n";  

    for(auto m:vec)
    {
        std::cout<<m<<" ";
    }
    std::cout<<"\n";   
}