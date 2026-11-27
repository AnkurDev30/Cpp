//sort and reverse

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


   //sort by assending.

    std::sort(vec.begin(),vec.end());
  
    std::cout<<"sort by assending.\n";

    for(int i=0;i<10;i++)
    {
        std::cout<<vec[i]<<" ";
    }

    std::cout<<"\n";

    //44 88 

    std::sort(vec.begin(),vec.end(),[](int x,int y){
        return x>y;
    });


    std::cout<<"sort by dissending.\n";

    for(int i=0;i<10;i++)
    {
        std::cout<<vec[i]<<" ";
    }

    std::cout<<"\n";


    std::reverse(vec.begin(),vec.end());


    std::cout<<"reverse vector\n";

    for(int i=0;i<10;i++)
    {
        std::cout<<vec[i]<<" ";
    }

    std::cout<<"\n";


}