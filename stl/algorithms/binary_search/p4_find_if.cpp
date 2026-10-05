#include<iostream>
#include<vector>
#include<algorithm>
class xy
{
    public:
    int a,b;
};

int main()
{
    xy x;
    std::vector<xy>vec;

    for(int i=0;i<5;i++)
    {
        x.a=i+7;
        x.b=i*9;
        vec.push_back(x);
    }
    for(auto m : vec)
    {
        std::cout<<m.a<<" "<<m.b<<std::endl;
    }

    int findVar;
    std::cout<<"enter variable for find\n";
    std::cin>>findVar;
    auto it = std::find_if(vec.begin(),vec.end(),[=](const xy &ax){
        return ax.a>findVar|| ax.b>findVar;
    });

    if(it!=vec.end())
    {
        std::cout<<"found\n";
    }
    else
    {
        std::cout<<"not found\n";
    }
}