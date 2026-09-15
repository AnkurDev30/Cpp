#include<iostream>
#include<vector>
#include<algorithm>
int main()
{
    std::vector<int>vec;

    for(int i=0;i<100;i++)
    {
        vec.push_back(i);
    }

    for(auto m:vec)
    {
        static int v=0;
        std::cout<<m<<" ";
        if(v%5==0)std::cout<<std::endl;

        v++;
    }
    std::cout<<std::endl;

    int countEven = std::count_if(vec.begin(),vec.end(),[](int x){
                    return x%2==0;
                    });
    std::cout<<"total num of even = "<<countEven<<std::endl;
}