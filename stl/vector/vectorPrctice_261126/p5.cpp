/*
Program 5: Find minimum, maximum and their positions
- Create a vector with 10 elements.
- Find the minimum and maximum values.
- Print their positions.
- Find the sum and average.
*/

#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdlib>


int main()
{
    std::vector<int>vec;

    std::cout<<"fill vector\n";
    for(int i=0;i<10;i++)
    {
        vec.push_back(rand()%100);
    }

    std::cout<<"print vector\n";

    int sum = 0;
    for(int i=0;i<vec.size();i++)
    {
        std::cout<<vec[i]<<" ";

        sum+=vec[i];
    }

    double average = static_cast<double>(sum)/10;


    std::cout<<"\n";

    std::cout<<"sum = "<<sum<<" average = "<<average<<std::endl;
    auto max = std::max_element(vec.begin(),vec.end());

    auto min = std::min_element(vec.begin(),vec.end());

    int var = *max;
    auto findmax = std::find(vec.begin(),vec.end(),var);
    var = *min;
    auto findmin = std::find(vec.begin(),vec.end(),var);


    int indexMax = std::distance(vec.begin(),findmax);

    int indexMin = std::distance(vec.begin(),findmin);

    std::cout<<"max = "<<*max<<" distance = "<<indexMax<<std::endl;
    std::cout<<"min = "<<*min<<" distance = "<<indexMin<<std::endl;
}