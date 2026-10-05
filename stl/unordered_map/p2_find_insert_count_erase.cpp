#include<iostream>
#include<unordered_map>
#include<vector>
inline void fun(std::unordered_map<int ,int>&unMap)
{
    for(auto m:unMap)
    {
        std::cout<<m.first<<" "<<m.second<<"\n";
    }
    std::cout<<std::endl;
}
inline void fun2(std::unordered_map<int ,int>&unMap)=delete;

int main()
{
    //fill the map

    std::unordered_map<int ,int>unMap;
    std::cout<<"fill the map\n";
    for(int i=1;i<11;i++)
    {
        int a = i+1000;
        int b = rand()%60;
        unMap.insert({a,b});
    }
    std::cout<<"print the map\n";
    fun(unMap);
    int key;

    std::cout<<"enter variable for find\n";
    std::cin>>key;

    auto it = unMap.find(key);

    if(it!=unMap.end())
    {
        std::cout<<"found "<<it->first<<" "<<it->second<<std::endl;
    }

    int val;
    std::cout<<"enter key for insert\n";
    std::cin>>key;
    std::cout<<"enter vale for key : "<<key<<" to insert\n";
    std::cin>>val;

    unMap.insert({key,val});

    std::cout<<"print the map after insert\n";
    fun(unMap);

    //first insert for data of one key and then count.

    std::vector<int>vec;

    vec.resize(10);

    for(int i=0;i<10;i++)
    {
        if(i%2==0)
        vec[i]=5;
        else  vec[i]=i+3;
    }
   // std::cout<<"debug1"<<std::endl;
    int i=1201;
    for(std::vector<int>::iterator it=vec.begin();it!=vec.end();it++)
    {
        unMap[i++]=*it;
    }
    std::cout<<"print the map after insert for count\n";
    fun(unMap);
    std::cout<<"enter key for count\n";
    std::cin>>key;
    int it1 = unMap.count(key);

    if(it1!=0)
    {
        std::cout<<it1<<" "<<std::endl;
    }
    std::cout<<"enter key for erase\n";
    std::cin>>key;
    unMap.erase(key);
    fun(unMap);
}