//Remove consecutive duplicate numbers ⭐

#include<iostream>
#include<vector>
#include<algorithm>

int main()
{
    std::vector<int>vec;
    for(int i=0;i<20;i++)
    {
        static int a=10;
        if(i%2==0)
        {
            
            vec.push_back(a++);
        }
        else if(i%3==0)
        {
            vec.push_back(a);
        }
        else if(i%4==0)
        {
            vec.push_back(a++);
        }
        else if(i%5==0)
        {
            vec.push_back(a);
        }
        else
        {
            vec.push_back(i);
        }
    }
    std::cout<<"before removing\n";
    for(auto m:vec)
    {
        std::cout<<m<<" ";
    }
    std::cout<<"\n";

    std::sort(vec.begin(),vec.end());

    std::cout<<"after sorting\n";
    for(auto m:vec)
    {
        std::cout<<m<<" ";
    }
    std::cout<<"\n";   

    //unique find

    auto it = std::unique(vec.begin(),vec.end());

    vec.erase(it,vec.end());

    std::cout<<"after removing\n";
    for(auto m:vec)
    {
        std::cout<<m<<" ";
    }
    std::cout<<"\n";    
}