//Find the largest and smallest element
#include<iostream>
#include<vector>
class vec{

    public:
        std::vector<int> vec1;
        int n;
        vec()
        {
           // int n;
            std::cout<<"enter no of elements in vector\n";
            std::cin>>n;
        }
        void fillVector()
        {
            std::cout<<"fill vector\n";
            for(int i=0;i<n;i++)
            {
                int x;
                std::cout<<"enter element no : "<<i<<std::endl;
                std::cin>>x;
                vec1.push_back(x);
            }
        }
        void printVector()
        {
            std::cout<<"print vector\n";
            for(int i=0;i<n;i++)
            {
                std::cout<<vec1[i]<<std::endl;
            }
        }
        void findLargestSmallest()
        {
            int a=vec1[0];
            int b=vec1[0];
            for(int i=0;i<n;i++)
            {
                if(a<vec1[i])
                a=vec1[i];

                if(b>vec1[i])
                b=vec1[i];
            }  
            std::cout<<"Largest = "<<a<<" smallest = "<<b<<std::endl;          
        }
};
int main()
{
    vec v1;
    v1.fillVector();
    v1.printVector();
    v1.findLargestSmallest();
    return 0;
}