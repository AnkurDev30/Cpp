#include<iostream>
#include<array>
#include<algorithm>
int main()
{
    std::array<int,10>a;

    int f=1;
    for(int i=0;i<10;i++)
    {
        if(i%2==0)
        {
            f=(2<<i);
        }
        else
        {
            f=(3<<i);
        }
        a[i]=f;
    }

    for(auto m:a)
    {
        std::cout<<m<<" ";
    }
    std::cout<<"\n";

    bool fx = std::binary_search(a.begin(),a.end(),128);

    if(fx == true)
    {
        std::cout<<" find\n";
    }
    else
    {
        std::cout<<" not find\n";
    }

}