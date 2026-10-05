#include<iostream>
#include<vector>
#include<algorithm>

class fg
{
    public:
    int a,b;
};
int main()
{
    fg f1;

    std::vector<fg>vec;

    for(int i=0;i<5;i++)
    {
        f1.a=11*i;
        f1.b=12*i;

        vec.push_back(f1);
    }
    for(std::vector<fg>::iterator it =vec.begin();
    it!=vec.end();it++)
    {
        std::cout<<"data 1: "<<it->a<<" data 2: "<<it->b<<std::endl;
    }

    int x0;
    std::cout<<"enter x0\n";
    std::cin>>x0;
    auto it = std::lower_bound(vec.begin(),vec.end(),x0,[](const fg fx,int value){
        return fx.a < value;
    });

    std::cout<<it->a<<" "<<it->b<<std::endl;

    fg temp;
    temp.a=x0;
    temp.b=x0;
    vec.insert(it,temp);

    for(std::vector<fg>::iterator it =vec.begin();
    it!=vec.end();it++)
    {
        std::cout<<"data 1: "<<it->a<<" data 2: "<<it->b<<std::endl;
    }    
}