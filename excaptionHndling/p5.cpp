#include<iostream>
#include<string>
bool digitCheck(std::string ab)
{
    bool rt=true;;
    for(int i=0;i<ab.length();i++)
    {
        if(!(ab[i]>='0'&&ab[i]<='9'))
        {
            rt=false;
            break;
        }
    }
    return rt;
}
int main()
{
    std::string ab;

    std::cout<<"enter a nuber\n";
    std::cin>>ab;

    int sum=0;
    try
    {
        bool a=digitCheck(ab);
        if(a==false)
        {
            throw ("please take only numbers digit\n");
        }

        for(int i=0;i<ab.length();i++)
        {
            sum =sum*10+ab[i]-48;
        }
        std::cout<<"num = "<<sum<<std::endl;

    }
    catch(const char*msg)
    {
        std::cout<<"ERROR! "<<msg<<std::endl;
    }
}