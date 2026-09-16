//Remove a string
#include<iostream>
#include<vector>
#include<algorithm>
struct names
{
    std::string names1;
};
void removeViaIterator(std::vector<std::string>&locVec)
{
    for(std::vector<std::string>::iterator it=locVec.begin();it!=locVec.end();it++)
    {
        if(*it=="Apple")
        {
            locVec.erase(it);
        }
        else
        {
            it++;
        }
    }

    for(auto m:locVec)
    {
        std::cout<<m<<std::endl;
    }
}
void eraseViaRemove(std::vector<std::string>&locVec)
{
    locVec.erase(std::remove(locVec.begin(),locVec.end(),"Apple"),locVec.end());
    for(auto m:locVec)
    {
        std::cout<<m<<std::endl;
    }
}
int main ()
{
    std::vector<std::string>vec;
    std::string name;
    names n1[7] = {
                    "KABIR",
                    "RED",
                    "SAWAN",
                    "SOYA",
                    "I AM BIG",
                    "RAVINA"
            };

    for(char i=0;i<10;i++)
    {
        static int j=0;
        if(i%3==0)
        {
            name = "Apple";
        }
        else
        {
            name =n1[j].names1;
            j++;
        }
        vec.push_back(name);
    }
    std::cout<<"before remove apple\n";
    for(auto m :vec)
    {
        std::cout<<m<<std::endl;
    }

    int opt=0;
    std::cout<<"enter option\n1. for iterator \n2. for remove algorithm\n";
    std::cin>>opt;

    std::cout<<"remove apple\n";
    switch(opt)
    {
        case 1:
            removeViaIterator(vec);
        break;
        case 2:
            eraseViaRemove(vec);
        break;
    }
}