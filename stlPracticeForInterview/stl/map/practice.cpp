//demo map

#include<iostream>
#include<map>

int main()
{
    std::map<int ,std::string> map1;
    char ab='A';
    for(auto i =0;i<26;i++)
    {
        std::string cd;
        cd.push_back(ab);
        map1[i]=cd;
        ab++;
    }
    //display.
    for(auto i =0;i<26;i++)
    {
        std::cout<<i*2<<"-> "<<map1[i]<<std::endl;
    }
    return 0;
}