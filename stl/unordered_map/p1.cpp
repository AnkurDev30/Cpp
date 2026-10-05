#include<iostream>
#include<unordered_map>

int main()
{
    std::unordered_map<int,int>unMap;

    for(int i=0;i<10;i++)
    {
        unMap[i]=rand()%1000;
    }
    std::cout<<"print map\n";
    for(auto u:unMap)
    {
        std::cout<<u.first<<" "<<u.second<<std::endl;
    }

    unMap[1000]=9000;
    std::cout<<"print map after operator wise insert\n";
    for(auto u:unMap)
    {
        std::cout<<u.first<<" "<<u.second<<std::endl;
    }
    unMap.insert({1200,3});
    std::cout<<"print map after insert fun insert\n";
    for(auto u:unMap)
    {
        std::cout<<u.first<<" "<<u.second<<std::endl;
    }
    
    unMap.erase(1200);
  std::cout<<"print map after erase fun insert\n";
    for(auto u:unMap)
    {
        std::cout<<u.first<<" "<<u.second<<std::endl;
    }  
}