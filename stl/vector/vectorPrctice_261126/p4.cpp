/**
Program 4: Sort and reverse vector
- Store 10 integers.
- Sort in ascending order.
- Sort in descending order.
- Reverse the vector.
APIs: sort(), greater<int>(), reverse().
*/

#include<iostream>

#include<vector>

#include<algorithm>

#include<cstdlib>

int main()
{
    std::vector<int>vec;

    std::cout<<"entering vector\n";

    for(int i=0;i<10;i++)
    {
        vec.push_back(rand()%100);
    }

    std::cout<<"print data\n";

    for(int i=0;i<vec.size();i++)
    {
        std::cout<<vec[i]<<" ";
    }
    std::cout<<"\nassending order\n";

    std::sort(vec.begin(),vec.end());
    std::cout<<"print data after assending order\n";

    for(int i=0;i<vec.size();i++)
    {
        std::cout<<vec[i]<<" ";
    }

    std::cout<<"\ndissending order\n";

    std::sort(vec.begin(),vec.end(),[](int x,int y){
        return x>y;
    });
    std::cout<<"print data after dissending order\n";

    for(int i=0;i<vec.size();i++)
    {
        std::cout<<vec[i]<<" ";
    }

    std::reverse(vec.begin(),vec.end());
    std::cout<<"\nprint data after reverse vector\n";

    for(int i=0;i<vec.size();i++)
    {
        std::cout<<vec[i]<<" ";
    }    
    std::cout<<"\n";
}