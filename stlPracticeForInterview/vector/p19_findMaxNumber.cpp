//Find Maximum Element Using Iterator
#include<iostream>
#include<vector>

int main()
{
    std::vector<int>vec;
    int ab;
    for(int a=0;a<10;a++)
    {
        std::cout<<"enter element\n";
        std::cin>>ab;
        vec.push_back(ab);
    }
    int max = vec[0];
    for(std::vector<int>::iterator it=vec.begin();it!=vec.end();it++)
    {
        if(max<*it)
        {
            max = *it;
        }
    }
    std::cout<<"Max = "<<max<<std::endl;

}