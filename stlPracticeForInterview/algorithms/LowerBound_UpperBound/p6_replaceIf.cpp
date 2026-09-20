#include<iostream>
#include<vector>
#include<algorithm>
int main()
{
    struct ab
    {
        int r;
        std::string name;
    };
    ab a;
    std::vector<ab>vec;

    for(int i=0;i<10;i++)
    {
        a.r=i;
        a.name="shyaam";

        vec.push_back(a);
    }

    std::cout<<"print data\n";
    ab key={55,"Kabir"};
    for(auto m:vec)
    {
        std::cout<<m.r<<" "<<m.name<<std::endl;
    }

    std::replace_if(vec.begin(),vec.end(),[](const ab &a){
        return a.r==3;
    },key);

    std::cout<<"print data after\n";
    
    for(auto m:vec)
    {
        std::cout<<m.r<<" "<<m.name<<std::endl;
    }

}