/*
Find an element manually — Take a number from the user and search for 
it using an iterator loop.
*/

#include<iostream>
#include<vector>
int main()
{
    std::vector<int>vec;
    for(int i;i<10;i++)
    {
        int j;
        std::cout<<"enter var\n";
        std::cin>>j;

        vec.push_back(j);
    }
    int find=0;
    int flag=0;
    std::cout<<"enter find value\n";
    std::cin>>find;

    for(std::vector<int>::iterator it=vec.begin();it!=vec.end();it++)
    {
        if(*it==find)
        {
            std::cout<<"find\n";
            flag=1;
        }
    }
    if(flag==0) std::cout<<"not find\n";
}