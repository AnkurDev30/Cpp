#include<iostream>
#include<vector>

struct i{

    int a;
    i(int p=0):a(p){};
    i()
    {

    }
};

int main()
{
    std::vector<i> vs;
    for(int p=0;p<5;p++)
    {
        int m;
        std::cout<<"enter data\n";
        std::cin>>m;
        i im(m);
        vs.push_back(im);
    }

    for(auto j:vs)
    {
        std::cout<<"display = "<<j.a<<std::endl;
    }

    std::cout<<"first we try erase()\n";

    vs.erase(vs.begin()+10);//if this position not available so it will delete last one
    /**
    
    if (vector.erase(a)>no of element)
    {
        earse(vector.end());
    }

    */

    std::cout<<"after erase()\n";
    for(auto j:vs)
    {
        std::cout<<"display = "<<j.a<<std::endl;
    }

    /**
        in empty functions we check     
    */

    if(vs.empty())
    {
        std::cout<<"its empty\n";
    }
    else
    {
        std::cout<<"its not empty\n";
    }

    /**
    check clear.
    */
    vs.clear();
    std::cout<<"after clear\n";
    if(vs.empty())
    {
        std::cout<<"its empty\n";
    }
    else
    {
        std::cout<<"its not empty\n";
    }
}