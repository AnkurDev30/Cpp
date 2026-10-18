#include<iostream>

class multiPurposeConst 
{
    private:
       
    public:
         int x;
         multiPurposeConst()
         {
            x=14;
         }
        void fun(multiPurposeConst const &s)
        {
            x=s.x+x;
            std::cout<<x<<std::endl;
        }
        /*void tryToModifiedConst(multiPurposeConst const &s1)
        {
            s1.x=10;
            std::cout<<s1.x<<std::endl;
        }*/
};

int main()
{
    multiPurposeConst m1;
    multiPurposeConst m2;
    m2.x = 90;
    m1.fun(m2);
}