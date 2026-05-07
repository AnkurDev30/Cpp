/*
🧱 3. Box Dimensions
Requirements:

Class:

length
width
height

Create:

one original object
one copied object

Print both.
*/

#include<iostream>

class boxDimensions
{
    private:
        int length;
        int width ;
        int height;
    public:
        boxDimensions(int len,int wid,int hei)
        {
            this->length = len;     
            this->width  = wid;    
            this->height = hei;
        }
        boxDimensions(boxDimensions &oldObj)
        {
            length = oldObj.length;
            width  = oldObj.width ;
            height = oldObj.height;
        }
        void display()
        {
            std::cout<<"length  = "<<length<<std::endl;
            std::cout<<"width   = "<<width<<std::endl;
            std::cout<<"height  = "<<height<<std::endl;
        }
};

int main()
{
    int l,w,h;

    std::cout<<"enter length width and height\n";
    std::cin>>l>>w>>h;

    boxDimensions box1(l,w,h);
    box1.display();

    boxDimensions box2(box1);
    box2.display();
}