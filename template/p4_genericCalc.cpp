/*
🧱 4. Generic Calculator
Requirements:

Create template functions:

add
subtract
multiply

Use:

same template logic

for multiple datatypes.
*/

#include<iostream>

template <typename dataType1>
dataType1 add(dataType1 a, dataType1 b)
{
    return a+b;
}

template <typename dataType2>
dataType2 sub(dataType2 a, dataType2 b)
{
    return a-b;
}

template <typename dataType3>
dataType3 mul(dataType3 a, dataType3 b)
{
    return a*b;
}

int main()
{
    int a,b,c;
    std::cout<<"enter a,b"<<std::endl;
    std::cin>>a>>b;

    c = add(a,b);
    std::cout<<"c add ="<<c<<std::endl;

    c = sub(a,b);(a,b);
    std::cout<<"c sub ="<<c<<std::endl;

    c = mul(a,b);
    std::cout<<"c mul ="<<c<<std::endl;

    float e,f,g;

    std::cout<<"enter e,f"<<std::endl;
    std::cin>>e>>f;

    g = add(e,f);
    std::cout<<"c add ="<<g<<std::endl;

    g = sub(e,f);
    std::cout<<"c sub ="<<g<<std::endl;

    g = mul(e,f);
    std::cout<<"c mul ="<<g<<std::endl;

}