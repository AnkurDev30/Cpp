//enum class
#include<iostream>

enum class color{
    red,
    blue,
    green,
};
enum class traffic{
    blue,
    red,
    green,
};

int main()
{
    int x = static_cast<int>(color::red);
    int y = static_cast<int>(color::blue);

    std::cout<<"x ="<<x<<"y = "<<y<<std::endl;
}