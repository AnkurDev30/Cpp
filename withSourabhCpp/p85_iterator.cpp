//iteartor : itrerators are nothing but a pointer which is help to perform insert erase kind of of operations for containers.

//begin and end
//begin -> point to the first element of container
//end -> point to the last element


#include<vector>
#include<iostream>

int main()
{
    std::vector<int>vec;

    for(int i =0;i<10;i++)
    {
        vec.push_back(rand()%100);
    }

    std::cout<<"print the vector\n";

    for(int i=0;i<10;i++)
    {
        std::cout<<vec[i]<<" ";
    }
    std::cout<<"\n";

    vec.insert(vec.begin()+6,87);

    std::cout<<"print the vector after insert\n";

    for(int i=0;i<vec.size();i++)
    {
        std::cout<<vec[i]<<" ";
    }
    std::cout<<"\n";

    vec.erase(vec.begin()+6);

    std::cout<<"print the vector after erase\n";

    for(int i=0;i<vec.size();i++)
    {
        std::cout<<vec[i]<<" ";
    }
    std::cout<<"\n";

}