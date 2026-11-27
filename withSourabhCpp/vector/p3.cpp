//find an element and its index

#include<iostream>

#include<vector>

#include<cstdlib>

#include<algorithm>
int main()
{

    std::vector<int>vec;

    std::cout<<"create a vector for 10 int\n";

    for(int i=0;i<10;i++)
    {
        vec.push_back(rand()%100);
    }

    std::cout<<"print vector Normal for loop\n";

    for(int i=0;i<10;i++)
    {
        std::cout<<vec[i]<<" ";
    }

    std::cout<<"\n";


    int value;

    std::cout<<"enter value\n";
    std::cin>>value;


    auto  findVar = std::find(vec.begin(),vec.end(),value);

    if(findVar!=vec.end())//1 2 3 4 5 6 7 8 
    {

        std::cout<<"value avaialable and distance : "<<findVar - vec.begin()<<std::endl;
    }
    else
    {
        std::cout<<"value not found\n";
    }
}