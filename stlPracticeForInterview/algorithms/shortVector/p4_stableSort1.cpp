#include<iostream>
#include<vector>
#include<algorithm>
struct at_
{
    public:
        std::string name;
        int num;
};
int main()
{
    at_ a1;
    std::vector<at_> vec;
    for(int i=0;i<5;i++)
    {
        std::cout<<"enter name\n";
        std::cin>>a1.name;
        std::cout<<"enter num\n";
        std::cin>>a1.num;

        vec.push_back(a1);
    }
    std::cout<<"display\n";
    for(auto m:vec)
    {
        std::cout<<"name : "<<m.name<<" ";
        std::cout<<"num  : "<<m.num;
        std::cout<<std::endl;
    }

    std::stable_sort(vec.begin(),vec.end(),[](at_ a,at_ b){
        return a.num<b.num;
    });
    std::cout<<"display after sorting\n";
    for(auto m:vec)
    {
        std::cout<<"name : "<<m.name<<" ";
        std::cout<<"num  : "<<m.num;
        std::cout<<std::endl;
    }
}
