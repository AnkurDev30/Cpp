/**
Split even and odd numbers
Given {1, 2, 3, 4, 5, 6}, create two vectors: one containing even numbers and the other containing odd numbers.
Learn: conditions, traversal, multiple output vectors
*/

#include<iostream>
#include<vector>

int main()
{
    std::vector<int>vec;

    for(int i=0;i<20;i++)
    {
        vec.push_back(rand()%200);
    }
    std::cout<<"print main vector\n";

    int count =0;
    for(auto m:vec)
    {
        std::cout<<m<<" ";
        count++;
        if(count%10 == 0)
        std::cout<<"\n";
    }
    std::cout<<"\n";

    std::vector<int>vecEven;
    std::vector<int>vecOdd;

    for(int i=0;i<20;i++)
    {
        if(vec[i]%2==0)
        {
            vecEven.push_back(vec[i]);
        }
        else
        {
            vecOdd.push_back(vec[i]);
        }
    }

    std::cout<<"print even vector\n";

    for(auto m:vecEven)
    {
        std::cout<<m<<" ";
    }
    std::cout<<"\n";
    std::cout<<"print odd vector\n";

    for(auto m:vecOdd)
    {
        std::cout<<m<<" ";
    }
    std::cout<<"\n";
}