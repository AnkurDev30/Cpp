//print data with the help of iterator.

#include<iostream>
#include<vector>

int main()
{
    std::vector<int > a;
    std::vector<int>::iterator It;

    a={1,2,3};
    for(It=a.begin();It!=a.end();It++)
    {
        std::cout<<*It<<std::endl;
    }
    for(auto it:a)
    {
        std::cout<<it<<std::endl;
    }

}