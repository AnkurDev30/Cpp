/**
Program 7: Count and filter elements
- Create a vector with positive and negative numbers.
- Count occurrences of a given number.
- Count even and odd numbers.
- Print only numbers greater than 50.
*/

#include <iostream>

#include<vector>

#include<algorithm>

#include<cstdlib>

int main()
{
    std::vector<int>vec ; 

    std::cout<<"craete vector via rand() fun\n";

    for(int i=0;i<10;i++)
    {
        if(i%2 == 0 )
        vec.push_back(rand()%100);
        else
        vec.push_back(i*-100);
    }

    std::cout<<"print vector:\n";

    for(int i=0;i<10;i++)
    {
        std::cout<<vec[i]<<" ";
    }
    std::cout<<"\n";

    std::cout<<"count the number\n";

    int number;

    std::cout<<"enter number which count we have to check\n";
    std::cin>>number;
    int count_Specific  = std::count(vec.begin(),vec.end(),number);

    std::cout<<"number of counts = "<<count_Specific<<std::endl;

    int count_even = std::count_if(vec.begin(),vec.end(),[](int x){
        return x%2==0;
    });

    std::cout<<"number of even counts = "<<count_even<<std::endl;

    int count_odd = std::count_if(vec.begin(),vec.end(),[](int x){
        return x%2!=0;
    });

    std::cout<<"number of odd counts = "<<count_odd<<std::endl;   

    std::cout<<"number grater than 50 : \n";
    for(int i=0;i<vec.size();i++)
    {
        if(vec[i]>50)
        {
            std::cout<<"number grater than 50 : "<<vec[i]<<std::endl;
        }
    }
}