//unique_ptr with a class object ⭐

#include<iostream>
#include<memory>


class stu 
{
    public:
        int roll;
        int marks;
        stu(int a,int b):roll(a),marks(b){};
        void printdData()
        {
            std::cout<<roll<<" "<<marks<<std::endl;
        }
        ~stu(){std::cout<<"deconstructor\n";}
};
int main()
{
   // stu s1;

    std::unique_ptr<stu>p = std::make_unique<stu>(1,100);

    p->printdData();

}