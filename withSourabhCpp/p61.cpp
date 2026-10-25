//static cast c++11

#include<iostream>
int main()
{

    int z=10;
    float b=(int)z;//c style cast

    float c = static_cast<float>(b);//more type safe 

    std::cout<<z<<" "<<b<<std::endl;
}

//static cast
//dyanmic cast : polymorphishm
//const cast: const ko edit 
//reinterpret cast //low level programig 
