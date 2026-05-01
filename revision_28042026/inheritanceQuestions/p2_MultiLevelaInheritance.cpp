//Multilevel inheritance

#include<iostream>
namespace nMultileval
{
    class firstLev
    {
        protected:
            int level1;
        public:
            void readLevalOne();
    };
    class secondLev:public firstLev
    {
        protected:
            int level2;
        public:
            void readLevalTwo();
    };
    class thirdLev:public secondLev
    {
        protected:
            int operation;
        public:
            void oerationWork();
    };
    void firstLev::readLevalOne()
    {
        std::cout<<"enter level1"<<std::endl;
        std::cin>>level1;
    }
    void secondLev::readLevalTwo()
    {
        std::cout<<"enter level2"<<std::endl;
        std::cin>>level2;
    }
    void thirdLev::oerationWork()
    {
        readLevalOne();
        readLevalTwo();
        int levelValue = level2+level1;
        std::cout<<"level 3= "<<levelValue<<std::endl;
    }
}
int main()
{
    nMultileval::thirdLev obj;
    obj.oerationWork();
}
