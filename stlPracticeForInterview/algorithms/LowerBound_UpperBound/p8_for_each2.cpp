#include<iostream>
#include<vector>
#include<algorithm>
int main()
{
    std::vector<int>vec;

    for(int i=1;i<=5;i++)
    {
        vec.push_back(i*11);
    }
    std::cout<<"print data\n";

    std::for_each(vec.begin(),vec.end(),[](int &x){
        x++;
    });

    std::cout<<"new data:\n";

    for(auto m:vec)
    {
        std::cout<<m<<std::endl;
    }
    return 0;
}