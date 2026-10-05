#include<iostream>
void varFun(int& p,int&q);
void swap(int& a, int& b)
{
    int temp = a;
    a=b;
    b=temp;
}
int main()
{
    int x,y;

    std::cout<<"enter x and y\n";
    std::cin>>x>>y;
    std::cout<<"before fun : "<<x<<" "<<y<<std::endl;
    varFun(x,y);
    std::cout<<"after fun : "<<x<<" "<<y<<std::endl;

    std::cout<<"before swap : "<<x<<" "<<y<<std::endl;
    swap(x,y);
    std::cout<<"after swap : "<<x<<" "<<y<<std::endl;

}
void varFun(int& p,int& q)
{
    p++;
    q++;
}