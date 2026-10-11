#include<iostream>

 enum class c1 {RED,BLUE,PINK};
 enum class c2 {ORANGE,RED,PINK};

int main()
{
    c1 a = c1::RED;
    c2 b = c2::PINK;

    std::cout<<static_cast<int>(a)<<" "<<static_cast<int>(b)<<std::endl;
}