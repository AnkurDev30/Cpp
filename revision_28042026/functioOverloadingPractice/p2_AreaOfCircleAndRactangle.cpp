//Area of circle / rectangle
#include<iostream>
namespace Area
{
    class cArea
    {
        private:
        public:
            int Area(int length, int width);
            float Area(float redius);
    };
}
int Area::cArea::Area(int length, int width)
{
    return length*width;
}
float Area::cArea::Area(float redius)
{
    return 2*3.14*redius;
}

int main()
{
    int l,w;
    float r;
    
    Area::cArea obj;
    std::cout<<"enter length width and rediues"<<std::endl;
    std::cin>>l>>w>>r;

    int areaRact = obj.Area(l,w);
    float areaCircle = obj.Area(r);

    std::cout<<"area of ractangle = "<<areaRact<<std::endl;
    std::cout<<"areaof circle = "<<areaCircle<<std::endl;

}