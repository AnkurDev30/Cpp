/*
Find vector size and capacity
Create an empty vector, insert elements one by one, and print size() and capacity() after each insertion.
Learn: size(), capacity(), reserve(), clear()
*/

#include<iostream>
#include<vector>
int main()
{
    std::vector<int>vec;

    char a = 'a';

    while(1)
    {
        int val;
        std::cout<<"enter value for vector\n";
        std::cin>>val;

        vec.push_back(val);

        std::cout<<"capacity - "<<vec.capacity()<<std::endl;
        std::cout<<"size     - "<<vec.size()<<std::endl;

        std::cout<<"if you want to add more press 'a' other wise press any\n";
        std::cin>>a;
        if(a!='a')
        break;
    }
    std::cout<<"print vector \n";
    for(auto m:vec)
    {
        std::cout<<m<<" ";
    }
    std::cout<<"\n";
}