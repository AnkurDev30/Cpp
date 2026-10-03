#include<iostream>

class A 
{
    public:
        int var;
};

int main()
{
    A a[3];//a1 var , a2 var , a3 var

    std::cout<<"take ip\n";
    for(int i=0;i<3;i++)
    {
        int var;
        std::cout<<"enter number\n";
        std::cin>>var;

        a[i].var=var;
    }
    std::cout<<"print op\n";
    for(int i=0;i<3;i++)
    {
        std::cout<<a[i].var<<std::endl;
    }

    std::cout<<"find greatest of 3 object\n";

    int greatest = a[0].var;
    int objeNum =0;

    for(int i=0;i<3;i++)
    {
        if(greatest<a[i].var)
        {
            greatest = a[i].var;
            objeNum = i;
        }
    }

    std::cout<<"graetest var value = "<<greatest<<" from object "<<objeNum<<std::endl;

}