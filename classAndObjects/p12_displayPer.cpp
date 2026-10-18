#include<iostream>

class student 
{
    private:
        int m1,m2,m3;
        float per;
    public:
        student()
        {
            m1=m2=m3=0;
            per = 0.0;
        }
        void calcPer(int x,int y,int z)
        {
            m1=x;
            m2=y;
            m3=z;
            per = (m1+m2+m3)/3.0;
            displayPer();
        }
        void displayPer()
        {
            std::cout<<per<<std::endl;
        }
};
int main()
{
    student s1;
    s1.displayPer();//0
    s1.calcPer(35,35,35);//35.0
    s1.displayPer();//35.0
}