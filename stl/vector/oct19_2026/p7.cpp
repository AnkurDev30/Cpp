/**
Copy one vector into another
Copy {1, 2, 3, 4} into another vector. Modify the copy and verify 
that the original remains unchanged.
Learn: copy construction, assignment, independent storage
*/
#include<iostream>
#include<vector>

class cls 
{
    private:
        std::vector<int >vec;
    public:
       
        cls()=default;
        void readData()
        {
            for(int i=0;i<10;i++)
            {
                vec.push_back(rand()%10);
            }
        }
        void display()
        {
            std::cout<<"display data : \n";
            for(auto m:vec)
            {
                std::cout<<m<<" ";
            }
            std::cout<<"\n";
        }
        cls (cls &obj)
        {
            vec = obj.vec;
        }
        void update()
        {
            vec[0]=99;
        }
};

int main()
{
    cls c1;

    c1.readData();

    c1.display();

    cls c2;
    c2=c1;

    c2.display();
    c2.update();

    std::cout<<"print data after update\n";
    c2.display();

    std::cout<<"print orignal\n";
    c1.display();

}