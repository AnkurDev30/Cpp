#include<iostream>
#include<vector>
int main()
{
    int a;
    std::vector<int> v2;
    v2.resize(5);//allocate memory and create but with size and capacity we cant.
    //means if we allocate memeory by capacity and reserv then 
    // we have to add data via push_back()only.

    v2[0]=5;
    v2[1]=6;
    v2[2]=7;
    v2[3]=8;
    v2[4]=9;

    int i=0;
    for( i=0;i<v2.size();i++)
    {
        std::cout<<"data "<<i<<" : "<<v2[i]<<std::endl;
    }
    v2[5]=10;
  
    std::cout<<"data "<<i<<" : "<<v2[i]<<std::endl;
}