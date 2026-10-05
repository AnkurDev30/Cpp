#include<iostream>
#include<vector>
#include<algorithm>
int main()
{
    std::vector<int>vec;
    for(int i=0;i<80;i++)
    {
        vec.push_back(i);
    }
    for(auto m:vec)
    {
        std::cout<<m<<" ";
    }
    std::cout<<std::endl;

    auto it = std::find_if(vec.begin(),vec.end(),[](int x){
        
        return x>40;
    });

    if(it!=vec.end())
    {
        std::cout<<"find = "<<*it<<std::endl;
    }
    else
    {
        std::cout<<"not find\n";
    }
}