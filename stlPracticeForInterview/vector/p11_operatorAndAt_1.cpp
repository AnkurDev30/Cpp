//operator vs at()

#include<iostream>
#include<vector>
int main()
{
    class vecSt{
        public:
            int p;
    };
    vecSt sec;
    std::vector<vecSt> v1;

    sec.p=12;
    v1.push_back(sec);

    std::cout<<"operator = "<<v1[0].p<<std::endl;
    std::cout<<"at = "<<v1.at(0).p<<std::endl;

    std::cout<<"operator = "<<v1[1].p<<std::endl;
    std::cout<<"at = "<<v1.at(1).p<<std::endl;//through error
}