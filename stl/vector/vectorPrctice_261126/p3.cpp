/*
Program 3: Find an element and its index
- Create a vector with 10 elements.
- Search for a number entered by the user.
- If found, print its index.
- If not found, print "Element not found".
APIs: std::find(), std::distance().
*/

#include<iostream>

#include<vector>
#include<cstdlib>
#include<algorithm>
int main()
{

    std::vector<int>vec; 
    std::cout<<"Create a vector with 10 elements.\n";
    for(int i=0;i<10;i++)
    {
        vec.push_back(rand()%100);
    }

    std::cout<<"print element\n";

    for(int i=0;i<vec.size();i++)
    {
        std::cout<<vec[i]<<" ";
    }
    std::cout<<"\n";
    int findNum ; 
    std::cout<<"enter number for search\n";
    std::cin>>findNum;

    auto findVar = std::find(vec.begin(),vec.end(),findNum);

    if(findVar!=vec.end())
    {
        std::cout<<"number found and position = "<<findVar - vec.begin()<<std::endl;
    }
    else
    {
        std::cout<<"element not found\n";
    }
}