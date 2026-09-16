#include<iostream>
#include<vector>
#include<algorithm>
int main()
{
    std::vector<int>vec;
    for(int i=0;i<10;i++)
    {
        vec.push_back(i);
    }
    int x;
    std::cout<<"enter x\n";
    std::cin>>x;
    auto it = std::upper_bound(vec.begin(),vec.end(),x);

    vec.insert(it,x);
    
    std::cout<<"after search and insert"<<std::endl;
    for(auto x:vec)
    {
        std::cout<<x<<" ";
    }
    std::cout<<std::endl;
   
}
