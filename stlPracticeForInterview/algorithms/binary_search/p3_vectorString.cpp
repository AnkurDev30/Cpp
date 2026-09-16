#include<iostream>
#include<vector>
#include<algorithm>
class xy
{
    public:
        std::string name;
        int roll;
};
int main()
{
    xy x1;
    std::vector<xy>vec;
    for(int i=0;i<5;i++)
    {
        std::cout<<"enter name\n";
        std::cin>>x1.name;

        std::cout<<"enter rollnumber\n";
        std::cin>>x1.roll;

        vec.push_back(x1);
    }

    std::cout<<"we sort first the vector\n";


    std::sort(vec.begin(),vec.end(),[](const xy &x1,const xy &x2){
        return x1.name<x2.name;
    });

    for(auto m:vec)
    {
        std::cout<<m.name<<" "<<m.roll<<std::endl;
    }


    std::string ab;
    std::cout<<"enter name for search\n";
    std::cin>>ab;

    xy key={ab,0};

    bool valid = std::binary_search(vec.begin(),vec.end(),key,[](const xy&x1,const xy&x2)
{
    return x1.name<x2.name;
});

    if(valid == true)
    {
        std::cout<<"found\n";
    }
    else
    {
        std::cout<<"not found\n";
    }
}