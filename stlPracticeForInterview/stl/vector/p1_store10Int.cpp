//store 10 integer numbers

#include<iostream>
#include<vector>
namespace store10IntN
{
    class store10IntC
    {
        private:
            std::vector<int> vect;
        public:
            store10IntC(std::vector<int> &v):vect(v){};
            void display();
    };
    void store10IntC::display()
    {
        std::cout<<"Display vector\n";
        for(size_t i =0;i<vect.size();i++)
        {
            std::cout<<i<<" ) "<<vect[i]<<std::endl;
        }
    }
}
int main()
{
    std::vector<int> myVect;
    std::cout<<"enter 10 integer one by one\n";

    for(int i=0;i<10;i++)
    {
        int a;
        std::cin>>a;
        myVect.push_back(a);
    }
    store10IntN::store10IntC obj(myVect);
    obj.display();
}