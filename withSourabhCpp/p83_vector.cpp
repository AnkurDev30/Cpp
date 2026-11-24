//complexity

/*
    vec[i] = o(1);
    vec.at()= o(1);same vec[45]

    push_back() =o(1);//if we have already capacity o(1), if no capacity then o(n).
*/

//Q. what happen if capacity exchaused
/*[0,1,2,3,...............64]
1000                     1064

[0,1,3,4.........64 65............128]
2000                           2128

1. A large memory block allocted to vector// 64 -> 128
2. copy data from last block and move to new blcok
3. new element added. 
4. release old memory.

operator and at()

opertor its index operator and use by [];
at-> its stl funtion

with the help of [] oprator we try to access out of bound value so undefine behavior 

vec[100]  vec[101]

but same thing with at funtion we get exception*/

#include<iostream>
#include<vector>

int main()
{
    std::vector<int>vec;

    for(int i=0;i<10;i++)
    {
        vec.push_back(100+i);

    }

    std::cout<<"print vector\n";

    for(int i=0;i<10;i++)
    {
        std::cout<<vec[i]<<" ";
    }
    std::cout<<"\n";

    std::cout<<vec[12]<<std::endl;

    std::cout<<vec.at(12)<<std::endl;


}












