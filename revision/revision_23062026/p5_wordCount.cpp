//Word Frequency using map
#include<iostream>
#include<map>
#include<string>
#include<sstream>
int main()
{
    std::map<std::string,int >m;
    std::string str;

    std::cout<<"enter string \n";
    getline(std::cin,str);
    std::string word;
    std::stringstream ss(str);
    while(ss>>word)
    {
        m[word]++;
    }


    for(auto &d:m)
    {
        std::cout<<"str "<<d.first<<" count = "<<d.second<<std::endl;
    }
}