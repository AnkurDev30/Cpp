#include<iostream>
#include<vector>
#include<algorithm>

int main()
{
    std::vector<int>vec;

    for(int i=0;i<10;i++)
    {
        if(i%2==0)
        {
            vec.push_back(0);
        }
        else
        {
            vec.push_back(rand()%100);
        }
    }
    std::cout<<"print vector\n";

    for(auto m:vec)
    {
        std::cout<<m<<"  ";
    }
    std::cout<<"\n";

    std::stable_partition(vec.begin(),vec.end(),[](int x){
        return x==0;
    });

    std::sort(vec.begin(),vec.end(),[](int x,int y){
        return x>y;
    });
    std::cout<<"print vector move zero\n";

    for(auto m:vec)
    {
        std::cout<<m<<"  ";
    }
    std::cout<<"\n";

}