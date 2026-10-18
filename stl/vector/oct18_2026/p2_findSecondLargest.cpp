#include<iostream>
#include<vector>
#include<algorithm>

int main()
{
    std::vector<int>vec;

    for(int i = 0 ;i<10;i++)
    {
        vec.push_back(rand()%100);
    }
    std::cout<<"print data:\n";
    for(auto m:vec)
    {
        std::cout<<m<<" ";
    }
    std::cout<<"\n";

 

    int largest = 0;

    for(std::vector<int>::iterator it=vec.begin();it!=vec.end();it++)
    {
        if(largest<*it)
        {
            largest = *it;
        }
    }

    int second_largest = 0;

    for(std::vector<int>::iterator it=vec.begin();it!=vec.end();it++)
    {
        if(second_largest<*it && *it!=largest)
        {
            second_largest = *it;
        }
    }

    std::cout<<"second largest : "<<second_largest<<std::endl;

}