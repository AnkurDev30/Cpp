/*
Remove elements using a condition
Remove all even numbers from {1, 2, 3, 4, 5, 6}.
Expected: {1, 3, 5}.
Algorithms: std::remove_if(), erase()
*/

#include<iostream>
#include<vector>
#include<algorithm>

int main()
{
    std::vector<int>vec;
    for(int i=0;i<10;i++)
    {
        vec.push_back(rand()%20);
    }
    std::cout<<"print vector data\n";

    for(auto m: vec)
    {
        std::cout<<m<<" ";
    }
    std::cout<<"\n";

    vec.erase(std::remove_if(vec.begin(),vec.end(),[](int x){
        return x%2==0;
    }),vec.end());

    std::cout<<"print vector data after remove if\n";

    for(auto m: vec)
    {
        std::cout<<m<<" ";
    }
    std::cout<<"\n";   
}