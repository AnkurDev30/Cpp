//Return reference from function

#include<iostream>
class cRefrenceReturn
{
    private:
        int a;
    public:
        cRefrenceReturn(int x): a(x){};
        int& fun1()
        {
            int &b =a;
            b++;
            return b;
        }
        void fun2()
        {
            int temp = fun1();
            std::cout<<"from refrence = "<<temp<<std::endl;
        }

};
int main()
{
    int y=5;
    cRefrenceReturn obj(y);
    obj.fun2();
    return 0;
}