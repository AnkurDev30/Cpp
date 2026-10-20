/*
Count occurrences of an element
Input: {1, 2, 2, 3, 2, 4}. Count occurrences of 2.
Expected: 3.
Algorithm: std::count()
*/

#include<iostream>
#include<vector>
#include<algorithm>

int main()
{
    std::vector<int>vec;

    for(int i=0;i<10;i++)
    {
        if(i%2==0)
            vec.push_back(rand()%200);
        else
            vec.push_back(8);
    }
    std::cout<<"vector printg\n";

    for(auto m:vec)
    {
        std::cout<<m<<" ";
    }

    std::cout<<"\n";

    int count8 = std::count(vec.begin(),vec.end(),8);

    std::cout<<"number of count 8 : "<<count8<<std::endl;

}