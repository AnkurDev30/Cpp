//find sum of vectore elements.
#include<iostream>
#include<vector>
namespace sumElementN
{
    class sumElementC;
}
namespace getElementsN
{
    class getElementsC
    {
        private:
            std::vector<int> vect;
        public:
            getElementsC(std::vector<int> &v)
            {
                vect=v;
            }
            friend class sumElementN::sumElementC;
    };
}
namespace sumElementN
{
    class sumElementC
    {
        public: 
            sumElementC(getElementsN::getElementsC obj)
            {
                int sum=0;
                for(size_t i=0;i<obj.vect.size();i++)
                {
                    sum+=obj.vect[i];
                }
                std::cout<<"Display Sum Of Element = "<<sum<<std::endl;
            }
    };
}
int main()
{
    std::vector<int> v;
    int a;
    for(size_t i=0;i<10;i++)
    {
        std::cout<<"enter element number "<<i<<std::endl;
        std::cin>>a;
        v.push_back(a);
    }
    getElementsN::getElementsC obj(v);
    sumElementN::sumElementC obj1(obj);
}