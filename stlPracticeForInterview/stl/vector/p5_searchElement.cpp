//Program 5

//Search a number in vector.
#include<iostream>
#include<vector>
namespace searchN
{
    class searchC
    {
        private:
            std::vector<int> vect;
            int n;
        public:
            searchC(std::vector<int> &v): vect(v){
                int a;
                std::cout<<"enter element for search in vect\n";
                std::cin>>a;
                n=a;
            }
            void display()
            {
                std::cout<<"display data\n";
                for(size_t i=0;i<vect.size();i++)
                {
                    std::cout<<vect[i]<<std::endl;
                }
            }
            void searchEl()
            {
                std::cout<<"searching\n";
                bool flag=false;
                for(size_t i=0;i<vect.size();i++)
                {
                    if(vect[i]==n)
                    {
                        std::cout<<"element found\n";
                        flag=true;
                        break;
                    }
                }
                if(flag==false) 
                {
                    std::cout<<"element not found\n";
                }
            }
    };
}
int main()
{
    int noOfElements;
    int val;

    std::cout<<"enter number of elements\n";
    std::cin>>noOfElements;

    std::vector<int> v;
    for(size_t i=0;i<noOfElements;i++)
    {
        std::cout<<"enter value for fill in vector\n";
        std::cin>>val;
        v.push_back(val);
    }
    searchN::searchC obj(v);

    obj.searchEl();

}