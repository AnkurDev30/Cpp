//insert

#include<iostream>
#include<map>

int main()
{
    std::map<int , std::string> m;
    

    for(int i=0;i<20;i++)
    {
        std::string p;
        for(char a=0;a<10;a++)
        {
            
            static char q='A';
            p.push_back(q++);

            if(q>'Z')
            {
                q='A';
            }
        }
        m[i]=p;
    }

    std::cout<<"print data\n";

    for(auto f:m)
    {
        std::cout<<f.first<<" "<<f.second<<std::endl;
    }
    m[2000]="RAM";
    m[2100]="RAVAN";
    std::cout<<"print data after insert\n";

    for(auto f:m)
    {
        std::cout<<f.first<<" "<<f.second<<std::endl;
    }

    auto f=m.find(2000);

    if(f!=m.end())
    {
        std::cout<<"find "<<f->first<<" "<<f->second<<std::endl;
    }

    m.erase(2100);

    std::cout<<"print data after erase\n";

    for(auto f:m)
    {
        std::cout<<f.first<<" "<<f.second<<std::endl;
    }

    
    
}