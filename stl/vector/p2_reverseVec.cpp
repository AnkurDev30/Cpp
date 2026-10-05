//reverse a vector
#include<iostream>
#include<vector>
class reverseVec
{
    public:
        std::vector<int> vec1;
        int n{5};
        void readdata()
        {
            vec1={1,2,3,4,5};
        }
        void reverse()
        {
            for(int i=0,j=4;j>i;j--,i++)
            {
                int temp=vec1[i];
                vec1[i]=vec1[j];
                vec1[j]=temp;
            }
        }

     
        void printVec()
        {
            for(int i=0;i<n;i++)
            {
                std::cout<<vec1[i]<<std::endl;
            }
        }

};
int main()
{
    reverseVec r1;
    r1.readdata();
    r1.reverse();
    r1.printVec();
}