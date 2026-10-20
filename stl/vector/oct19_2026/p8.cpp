/*
Reverse a vector manually
Reverse {1, 2, 3, 4, 5} without using std::reverse().
Learn: index manipulation, swapping, two pointers
*/
#include<iostream>
#include<vector>
#include<algorithm>
int main()
{
    std::vector<int>vec;

    for(int i=0;i<10;i++)
    {
        vec.push_back(rand()%100);
    }
    std::cout<<"print vector\n";

    for(auto m:vec)
    {
        std::cout<<m<<" ";
    }
    std::cout<<"\n";

    std::cout<<"reverse  basic\n";

    for(int i=vec.size()-1,j=0;i>j;i--,j++)
    {
        int temp =vec[j];
        vec[j]=vec[i];
        vec[i]=temp;
    }
    std::cout<<"print vector after reverse\n";

    for(auto m:vec)
    {
        std::cout<<m<<" ";
    }
    std::cout<<"\n";    

    std::cout<<"reverse vector via iterator\n";

    for(auto it =vec.rbegin();it!=vec.rend();it++)
    {
        std::cout<<*it<<" ";
    }
    std::cout<<"\n";    

    std::cout<<"reverse vector reverse algorithm\n"; 
    
    std::reverse(vec.begin(),vec.end());

    std::cout<<"print vector after reverse algorithm\n";

    for(auto m:vec)
    {
        std::cout<<m<<" ";
    }
    std::cout<<"\n"; 
}