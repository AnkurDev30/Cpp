#include<iostream>
#include<vector>
#include<algorithm>

int main()
{
    std::vector<int>vec;
    for(int i=0;i<30;i++)
    {
        vec.push_back(i);
    }
    for(auto m:vec)
    {
        static int count =0;
        std::cout<<" "<<m<<" ";

        if(count%5 == 0)
        std::cout<<"\n";

        count++;
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
                    return (x%2==0);
                }
            ),
        vec.end()
    );

    std::cout<<"remove even number\n";
    for(auto m:vec)
    {
        static int count =0;
        std::cout<<" "<<m<<" ";

        if(count%5 == 0)
        std::cout<<"\n";

        count++;
    }
    std::cout<<"\n";
}