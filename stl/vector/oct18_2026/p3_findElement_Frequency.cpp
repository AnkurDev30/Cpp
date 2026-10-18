#include<iostream>
#include<vector>
#include<algorithm>

int main()
{
    std::vector<int>vec;

    for(int i=0;i<10;i++)
    {
        if(i%2==0)
        vec.push_back(rand()%200);
        else vec.push_back(4);
    }
    std::cout<<"print vector\n";
    for(auto m:vec)
    {
        std::cout<<m<<" ";
    }
    std::cout<<"\n";
    int countVar =0;
    std::cout<<"enter var for count\n";
    std::cin>>countVar;

    int countTimes = std::count(vec.begin(),vec.end(),countVar);
    
    std::cout<<"number of times = "<<countTimes<<std::endl;

}