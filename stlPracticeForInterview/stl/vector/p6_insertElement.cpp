//Program 6
//Insert element at position.
#include<iostream>
#include<vector>
namespace inserEleAtPosN
{
    struct inserEleAtPosS
    {
        private:
            std::vector<int> vect;
        public:
            inserEleAtPosS(std::vector<int> &vect)
            {
                this->vect = vect;
            }
            void display()const
            {
                std::cout<<"Display data\n";
                for(size_t i=0;i<vect.size();i++)
                {
                    std::cout<<vect[i]<<std::endl;
                }
            }
            void insertElement()
            {
                int a;
                std::cout<<"Enter position for inserting\n";
                std::cin>>a;
                if(a<=vect.size())
                {
                    int n;
                    std::cout<<"Enter number for insert\n";
                    std::cin>>n;
                    vect.insert(vect.begin()+a, n);
                }
            }
    };
}
int main()
{
    int numOfElements;
    std::cout<<"Enter numnber of elements for vector\n";
    std::cin>>numOfElements;
    std::vector<int> vect;
    std::cout<<"Add elements\n";
    for(size_t i=0;i<numOfElements;i++)
    {
        int a;
        std::cout<<i+1<<" Element\n";
        std::cin>>a;
        vect.push_back(a);   
    }
    inserEleAtPosN::inserEleAtPosS obj(vect);
    std::cout<<"Before insert element\n";
    obj.display();
    std::cout<<"Insert element\n";
    obj.insertElement();
    std::cout<<"After insert element\n";
    obj.display();
}