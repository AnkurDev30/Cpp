#include<iostream>
#include<vector>
#include<algorithm>
int main()
{
    std::vector<char>vec;
    char ab;

    for(int i=65;i<90;i++)
    {
        if(i%8==0)
        {
            ab='x';
            vec.push_back(ab);
        }
        else
        {
            vec.push_back(i);
        }
    }
    std::cout<<"Before remove\n";
    for(std::vector<char>::iterator it=vec.begin();it!=vec.end();it++)
    {
        std::cout<<*it<<" ";
    }
    std::cout<<"\n";

    vec.erase(std::remove(vec.begin(),vec.end(),'x'),vec.end());

    std::cout<<"After remove\n";
    for(std::vector<char>::iterator it=vec.begin();it!=vec.end();it++)
    {
        std::cout<<*it<<" ";
    }
    std::cout<<"\n";
}
