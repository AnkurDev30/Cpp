/*
🧱 2. Generic Maximum Number
Requirements:

Create template function:

findMax()

Return larger value between:

two integers
two floats
two chars
*/

#include<iostream>
template <typename t>
t funMax(t a,t b)
{
    t c = a>b?a:b;
    return c;
}
int main()
{
    int     a = funMax(12,14);
    float   b = funMax(3.5,3.50);
    char    c = funMax('A','B');

    std::cout<<"a = "<<a<<std::endl;
    std::cout<<"b = "<<b<<std::endl;
    std::cout<<"c = "<<c<<std::endl;
}
