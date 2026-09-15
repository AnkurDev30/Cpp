#include<iostream>
#include<vector>
#include<algorithm>
class cla
{
    public:
        int a,b;
};
int main()
{
    cla c1;
    std::vector<cla>vec;

    for(int i=0;i<8;i++)
    {
        static int j=0;
        c1.a=i;
        c1.b=j;
        j++;

        vec.push_back(c1);
    }
    std::cout<<"display data\n";
    for(auto p:vec)
    {
        std::cout<<p.a<<" "<<p.b<<std::endl;
    }
    std::cout<<"\n";

    auto it = std::min_element(vec.begin(),vec.end(),[](const cla &ca,const cla &cb)
    {
        return ca.a<cb.a;
    });
    auto im = std::max_element(vec.begin(),vec.end(),[](const cla &ca,const cla &cb)
    {
        return ca.b>cb.b;
    });

    if(it!=vec.end())
    {
        std::cout<<"minimum = "<<it->a<<std::endl;
    }
    if(im!=vec.end())
    {
        std::cout<<"minimum = "<<im->b<<std::endl;
    }
}