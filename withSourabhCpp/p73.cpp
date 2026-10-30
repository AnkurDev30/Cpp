#include<iostream>
template <typename T>
T fun2(T a,T b)
{
    return a+b;
}

int main()
{
    float result = fun2(10.78, 9.333333);
    std::cout<<"float result = "<<result<<std::endl;

    std::string str1 =  "ABC";
    std::string str2 =  "SKL";
    std::string strResult = fun2(str1,str2);
    std::cout<<"str result = "<<strResult<<std::endl;


    int x = fun2(1000,2000);
    std::cout<<"int result = "<<x<<std::endl;
}
