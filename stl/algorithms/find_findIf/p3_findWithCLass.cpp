#include<iostream>
#include<vector>
#include<algorithm>
class AN
{
    public:
        int a,b;
};
int main()
{
    AN an;
    std::vector<AN>vec;
    for(int i=0;i<3;i++)
    {
        an.a=i*2;
        an.b=i*3;
        vec.push_back(an);
    }
    for(auto m: vec)
    {
        std::cout<<m.a<<" "<<m.b<<std::endl;
    }

    auto it = find_if(vec.begin(),vec.end(),[](const AN a12){
        return (a12.b==6) ;
    });

    if(it!=vec.end())
    {
        std::cout<<"find\n";
    }
    else
    {
        std::cout<<"not find\n";
    }
}