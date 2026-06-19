//Palindrome
#include<iostream>
void PalindromeFun(int checkPali)
{
    //number 
    int stNum =checkPali;
    //reverse number 123 3, sum*10+r,30+2
    int sum=0;
    int r;
    for(auto a=1;checkPali;a++)
    {
        r = checkPali%10;
        sum = sum*10+r;
        checkPali=checkPali/10;
    }
    //if number = reverse number
    if(stNum==sum)
    {
        std::cout<<"number is palindrom\n";
    }
    else
    {
        std::cout<<"number is not palindrom\n";
    }
}
int main()
{
    int num;
    std::cout<<"Enter Number\n";
    std::cin>>num;
    PalindromeFun(num);
}