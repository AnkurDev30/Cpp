//Find maximum element.
#include<iostream>
#include<vector>
namespace maxN
{
    class maxC
    {
        private:
            std::vector<int> vect;
        public:
            maxC(std::vector<int> &v):vect(v){};
            void display()
            {
                for(size_t i=0;i<vect.size();i++)
                {
                    std::cout<<vect[i]<<std::endl;
                }
            }
            void findMax()
            {
                int max=vect[0];
                for(size_t i=0;i<vect.size();i++)
                {
                    if(max<vect[i])
                    {
                        max=vect[i];
                    }
                }
                std::cout<<"Display Maximum = "<<max<<std::endl;
            }
    };
}
int main()
{
    int numberOfElements;

    std::cout<<"enter no of elements\n";
    std::cin>>numberOfElements;

    std::vector<int> v;
    int a;
    for(size_t i=0;i<numberOfElements;i++)
    {
        std::cout<<"enter var"<<std::endl;
        std::cin>>a;
        v.push_back(a);
    }
    maxN::maxC obj(v);
    obj.display();
    obj.findMax();
}