//Swap using reference
#include<iostream>
class cRefrenceSwapVar
{
    private :
    public:

        void vSwap(int &x1,int &y1)
        {
            x1 = x1+y1;//5 3 8 
            y1 = x1-y1;// 8-3 5
            x1 = x1-y1;//8-5 3
        }
};
int main()
{
    int a,b;
    std::cout<<"enter two numbers"<<std::endl;
    std::cin>>a>>b;
    cRefrenceSwapVar obj;
    obj.vSwap(a,b);
    std::cout<<"after swap\n a ="<<a<<"\n b ="<<b<<std::endl;
}