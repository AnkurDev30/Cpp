#include<iostream>
#include<vector>
#include<algorithm>
class Class
{
    public:
        int a;
        std::string name;
};

int main()
{
    std::vector<Class>vec;

    Class class10;
    Class key ={104,""};
    char k=5;
    char firstCharcter='A';
    for(int i=1;i<11;i++)
    {
        class10.a=i+100;
        for(char j=0;j<k+i;j++)
        {
            
            class10.name.push_back(firstCharcter+j);
            if(j=='Z')
            {
                firstCharcter='B';
            }
           // std::cout<<"f1 : "<<firstCharcter<<" j="<<j<<std::endl;
        }
        //std::cout<<class10.name<<"\n";
        k++;
        firstCharcter++;

        vec.push_back(class10);
    }
    for(auto m:vec)
    {
        std::cout<<m.a<<" "<<m.name<<std::endl;
    }

    bool found = binary_search(vec.begin(),vec.end(),key,[](const Class &a1,const Class &b1){
        return a1.a<b1.a;
    });

    if(found)
        std::cout << "Found\n";
    else
        std::cout << "Not Found\n";

}