#include<iostream>
enum status{A,B,C};

int main()
{
    status p=C;
    int a[10];
    for(int i=0;i<10;i++)
    {
        a[i]=rand()%1000+p;
    }
    std::cout<<"before separation\n";
    for(int i=0;i<10;i++)
    {
        std::cout<<a[i]<<" ";
    }
    std::cout<<"\n";
    for(int i=0;i<10;i++)
    {
        if(a[i]%2!=0)
        {
            for(int j=i+1;j<10;j++)
            {
                if(a[j]%2==0)
                {
                    int temp =a[j];
                    a[j]=a[i];
                    a[i]=temp;
                    break;
                }
            }
        }
    }
    std::cout<<"after separation\n";
    for(int i=0;i<10;i++)
    {
        std::cout<<a[i]<<" ";
    }
    std::cout<<"\n";

}