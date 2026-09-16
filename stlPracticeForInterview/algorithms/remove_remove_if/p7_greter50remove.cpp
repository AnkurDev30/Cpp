//remove a number greater than 50

#include<iostream>
#include<vector>
#include<algorithm>

int main()
{
    std::vector<int>vec;

    int a=51;
    for(int i=0;i<10;i++)
    {
        if(i%2==0)
        {
            vec.push_back(a++);
        }
        else
        {
            vec.push_back(i);
        }
    }
    std::cout<<"before remove 50\n";
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
                return (x>50);
            }
        ),
        vec.end()
    );
    std::cout<<"after remove 50\n";

    for(auto m:vec)
    {
        std::cout<<m<<" ";
    }
    std::cout<<"\n";
}