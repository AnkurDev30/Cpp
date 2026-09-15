#include<iostream>
#include<vector>
#include<algorithm>
int main()
{
    std::vector<int>vec;
    for(int a=1;a<100;a++)
    {
        vec.push_back(a);
    }
    std::cout<<"before desending order\n";
    for(auto m:vec)
    {
        std::cout<<m<<" ";
    }
    std::cout<<std::endl;

    std::sort(vec.begin(),vec.end(),[](int a,int b){
        return a>b;
    });
    std::cout<<"after desending order\n";
    for(auto m:vec)
    {
        std::cout<<m<<" ";
    }
    std::cout<<std::endl;
}