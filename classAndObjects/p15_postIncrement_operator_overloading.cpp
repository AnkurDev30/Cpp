//post increment

#include<iostream>

class post 
{
    private:
        int value;
    public:
        post(int val)
        {
            value = val;
        }
        post operator ++(int)
        {
            post temp =*this;
            value++;
            return temp;
        }
        void display()
        {
            std::cout<<value<<std::endl;
        }
};
int main()
{
    post p(7);
    post p1= p++;
    //p++;
    p1.display();
    p.display();
}