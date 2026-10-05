/*
Insert an element before a value
*/
#include<iostream>
#include<vector>
int main()
{
    std::vector<int> vec;
    for(int i=1;i<10;i++)
    {
        vec.push_back(i*5);
    }
    for(std::vector<int>::iterator it=vec.begin();it!=vec.end();it++)
    {
        if(*it==25)
        {
            it=vec.insert(it,21);
            it++;
        }
    }
    for(auto ap:vec)
    {
        std::cout<<ap<<std::endl;
    }
}