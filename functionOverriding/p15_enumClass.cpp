//30 sep 2026

#include<iostream>

enum class color {red,green,yellow};
enum class color2 {red,green,yellow};

int main()
{
    color a=color::red;
    color2 b=color2::green;

    std::cout<<a<<" "<<b<<std::endl;
}