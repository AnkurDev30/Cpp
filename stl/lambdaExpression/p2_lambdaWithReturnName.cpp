//lamba with return name.
#include<iostream>
//#include<vector>
int main()
{
    //std::vector<int>vec = {55,44,22,33,11};
    int lambda = []()->int
    {
        int a=10;
        std::cout<<"hi"<<std::endl;
        return a;
    }();
    std::cout<<lambda<<std::endl;

}