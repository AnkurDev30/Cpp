#include<iostream>

int main()
{
    int a[10];
    for(int i=0;i<10;i++)
    {
        a[i] = rand()%100;
    }
    std::cout<<"print \n";

    for(int i=0;i<10;i++)
    {
        std::cout<<a[i]<<" ";
    }
    std::cout<<"\n";

    for(int i=0;i<10;i++)
    {
        if(a[i]%2!=0)
        {
            for(int j=0;j<10;j++)
            {
                if(a[j]%2==0)
                {
                    int temp = a[j];
                    a[j]=a[i];
                    a[i]=temp;
                }
            }
        }
    }
    std::cout<<"print after sepration\n";

    for(int i=0;i<10;i++)
    {
        std::cout<<a[i]<<" ";
    }
    std::cout<<"\n";

}