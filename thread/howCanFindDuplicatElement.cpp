#include<iostream>
#include<vector>
#include<algorithm>

//try to find all duplicate element.
int main()
{
    std::vector<int>vec;

    for(int i=0;i<20;i++)
    {
        if(i%2==0)
        {
            vec.push_back(3);
        }
        if(i%3==0)
        {
            vec.push_back(5);
        }
        else
        {
            vec.push_back(i);
        }
    }

     std::cout<<"print\n";
    for(auto m:vec)
    {
        std::cout<<m<<" ";
    }
    std::cout<<"\n";

    std::cout<<"find dulicate data\n";

   /* auto it = std::find_if(vec.begin(),vec.end(),[](int x,int y){
        if(x==y)std::cout<<"duplicate\n";

        return x==y;
    });*/

    std::sort(vec.begin(),vec.end());

    auto f = std::unique(vec.begin(),vec.end());

    std::cout<<"duplicat = "<<*f<<std::endl;

}