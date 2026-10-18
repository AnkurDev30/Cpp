//pre and post 
#include<iostream>

class prePost 
{
    private:
        int value;
    public:
        prePost(int val)
        {
            value=val;
        }
        prePost& operator ++()
        {
            value++;
            return *this;
        }
        prePost operator ++(int)
        {
            prePost temp = *this;
            value++;
            return temp;
        }
        void display()
        {
            std::cout<<"data : "<<value<<std::endl;
        }
};
int main()
{
    prePost p1(7);
    ++p1;
    p1.display();

    prePost p2(10);
    prePost p3 = p2++;
    p2.display();
    p3.display();
}