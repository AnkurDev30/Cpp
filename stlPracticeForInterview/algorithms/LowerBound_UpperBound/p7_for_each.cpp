#include<iostream>
#include<algorithm>
#include<vector>

int main()
{
    std::vector<int>vec;

    for(int i=0;i<10;i++)
    {
        vec.push_back(i);
    }

    std::for_each(vec.begin(),vec.end(),[](int x)
{
    if(x<5)
    {
        std::cout<<x<<"inlmbda\n";
    }
});
return 0;

}