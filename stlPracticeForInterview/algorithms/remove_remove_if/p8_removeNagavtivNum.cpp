#include<iostream>
#include<vector>
#include<algorithm>
int main()
{
    std::vector<int>vec;
    int a=-1;
    for(int i=0;i<20;i++)
    {
        if(i%3==0)
        {
            vec.push_back(a);
            a--;
        }
        else
        {
            vec.push_back(i);
        }
    }
    std::cout<<"before remov nagative\n";
    for(auto m:vec)
    {
        std::cout<<m<<" ";
    }
    std::cout<<"\n";

    vec.erase
    (
        std::remove_if
        (
            vec.begin(),
            vec.end(),
            [](int x)
            {
                return x<0;
            }
        ),
        vec.end()
    );

    std::cout<<"after remov nagative\n";
    for(auto m:vec)
    {
        std::cout<<m<<" ";
    }
    std::cout<<"\n";

}