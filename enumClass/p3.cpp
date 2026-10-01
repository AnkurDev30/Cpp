#include<iostream>
enum class first{
    red,blue,green
};
enum class second{
    red,blue,green
};
void funDupli()
{
    int a[10];
    for(int i=0;i<10;i++)
    {
        if(i%2==0)
        a[i] = rand()%1000;
        else
        a[i] = 5;
    }
    std::cout<<"before duplicate delete\n";
    for(int i=0;i<10;i++)
    {
        std::cout<<a[i]<<" ";
    }
    std::cout<<"\n"; 
    int size =10;
    for(int i=0;i<size-1;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(a[i]==a[j])
            {
                for(int k=j;k<size-1;k++)
                {
                    a[k]=a[k+1];
                }
                j--;
                size--;
            }
        }
    }
    std::cout<<"after duplicate delete\n"<<size<<std::endl;
    for(int i=0;i<size;i++)
    {
        std::cout<<a[i]<<" ";
    }
    std::cout<<"\n";  
}
int main()
{

    int apple = static_cast<int>(first::red);
    int banana= static_cast<int>(second::green);

    std::cout<<apple<<" "<<banana<<std::endl;

    funDupli();
}