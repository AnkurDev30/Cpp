#include<iostream>
#include<vector>

//resize and reserve

int main()
{
    std::vector<char>vec;
    std::vector<char>vec1;

    vec.reserve(200);//it will reserve capacity

    std::cout<<vec.capacity()<<std::endl;
    //std::cout<<vec1.capacity()<<std::endl;

    std::cout<<vec[0]<<std::endl;

    vec[1] = 'A';
    std::cout<<vec[1]<<std::endl;

    vec1.resize(100);

    std::cout<<"vec1 capacity = "<<vec1.capacity()<<std::endl;
    std::cout<<vec1[0]<<std::endl;

    vec1.at(45)='Z';
    std::cout<<vec1[45]<<std::endl;

}