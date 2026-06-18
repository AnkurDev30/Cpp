#include<iostream>
#include<fstream>
#include<vector>
#include<string>
#include<map>
#include<sstream>
int main()
{
    std::map<int,std::string>map2;
    std::ifstream f("namesFile.txt",std::ios::in);
    std::vector<std::string > v;
    std::string name;
    std::string readName;
    if(f.is_open()==true)
    {
        while(getline(f,readName))
        {
            std::stringstream ss(readName);
            getline(ss,name,'\n');
            v.push_back(name);
        }
        for(int i=1;i<101;i++)
        {
            map2.insert({i,v[i-1]});
        }
        for(int i=1;i<101;i++)
        {
            std::cout<<"Id: "<<i<<" name: "<<map2[i]<<std::endl;;
        }

        std::cout<<"size of data = "<<map2.size()<<std::endl;

        auto it = map2.find(29);

        std::cout<<"key "<<it->first;
        std::cout<<"value "<<it->second;
    } 
}