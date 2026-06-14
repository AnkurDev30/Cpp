//Find minimum element.
#include<iostream>
#include<vector>
namespace minN
{
    class minC
    {
        private:
            std::vector<int> vect;
        public:
            minC(std::vector<int> &v):vect(v){};
            void display()
            {
                std::cout<<"Display data\n";
                for(size_t i=0;i<vect.size();i++)
                {
                    std::cout<<vect[i]<<std::endl;
                }
            }
            void findMin()
            {
                int min=vect[0];
                for(size_t i=0;i<vect.size();i++)
                {
                    if(min>vect[i])
                    {
                        min=vect[i];
                    }
                }
                std::cout<<"Display Minimum = "<<min<<std::endl;
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
    minN::minC obj(v);
    obj.display();
    obj.findMin();
}