#include<vector>
#include<iostream>

int main()
{
    std::vector<float>vec;
    float var;
    for(int i=0;i<40;i++)
    {
        var = rand()%100;
        var = var*0.1;
        vec.push_back(var);
    }

    std::cout<<"print data\n";

     for(int i=0;i<40;i++)
    {
        std::cout<<vec[i]<<" ";

        if(i%8==0)
        std::cout<<"\n";
    }   
    std::cout<<"\n";

    //size and capacity

    std::cout<<"vector Size = "<<vec.size()<<std::endl;

    std::cout<<"vector capacity = "<<vec.capacity()<<std::endl;
   // float var;

    for(int i=0;i<24;i++)
    {
        var = rand()%100;
        var = var*0.1;
        vec.push_back(var);
    }
    std::cout<<"________________________________________________\n";
    std::cout<<"print data more 24\n";

     for(int i=0;i<64;i++)
    {
        std::cout<<vec[i]<<" ";

        if(i%8==0)
        std::cout<<"\n";
    }   
    std::cout<<"\n";

    std::cout<<"vector Size = "<<vec.size()<<std::endl;

    std::cout<<"vector capacity = "<<vec.capacity()<<std::endl;
    std::cout<<"________________________________________________\n";

    vec.push_back(100.900);
    std::cout<<"print data after add 100.90\n";

     for(int i=0;i<65;i++)
    {
        std::cout<<vec[i]<<" ";

        if(i%8==0)
        std::cout<<"\n";
    }   
    std::cout<<"\n";

    std::cout<<"vector Size = "<<vec.size()<<std::endl;

    std::cout<<"vector capacity = "<<vec.capacity()<<std::endl;
    std::cout<<"________________________________________________\n";


}