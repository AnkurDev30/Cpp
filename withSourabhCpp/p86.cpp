#include<iostream>

#include<vector>

int main()
{
    std::vector<int>vec;

    for(int i=0;i<10;i++)
    {
        if(i%3 == 0)vec.push_back(5);
        else vec.push_back(rand()%20);
    }

    std::cout<<"print data\n";
    for(int i=0;i<10;i++)
    {
       std::cout<<vec[i]<<" ";
    }    
    std::cout<<"\n";

    for(std::vector<int>::iterator it =vec.begin();
    it!=vec.end();)
    {
        if(*it==5)
        {
            it = vec.erase(it);
        }
        else
        {
            it++;
        }
    }

    std::cout<<"print data after erase all 5\n";
    for(int i=0;i<vec.size();i++)
    {
       std::cout<<vec[i]<<" ";
    }    
    std::cout<<"\n";
}