/*
Find the first element matching a condition
Find the first even number in {1, 3, 7, 8, 10}.
Expected: 8.
Algorithm: std::find_if() with a lambda
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
    std::cout<<"print data\n";

    for(auto m:vec)
    {
        std::cout<<m<<" ";
    }
    std::cout<<"\n";

    auto firstEven = std::find_if(vec.begin(),vec.end(),[](int x){
        return x%2==0;
    });

    std::cout<<"first even numbe is : "<<*firstEven<<std::endl;
}

