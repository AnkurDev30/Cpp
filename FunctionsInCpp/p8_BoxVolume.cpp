/**********************************************************************************

8. Box volume addition

Class: Box
Members: l, w, h
Function: addVolume(Box) → return object

Date : 17 feb 2025
**********************************************************************************/

//!< header file declaration
#include<iostream>

//!< namespace defination
namespace nBoxVolume
{
    //!< class defination.
    class cBoxVolume
    {
        private:
            int length;
            int width;
            int height;
            int volume;
        public:
            //!< default constructor.
            cBoxVolume()
            {
                length  = 0;
                width   = 0;
                height  = 0;
                volume  = 0;
            }
            //!< parameterized constructor.
            explicit cBoxVolume(int l, int w, int h) : length(l),width(w),height(h){}

            //!< volume calaculation.
            int volumeCalculation()
            {
                volume = length * width * height;
                return volume;
            }
            void displayVolume()const
            {
                std::cout<<"volume = "<<volume<<std::endl;
            }
            //!< addtion for volume function
            cBoxVolume volumeAddition(cBoxVolume obj);

    };
    //!< function volume addition.
    cBoxVolume cBoxVolume::volumeAddition(cBoxVolume obj)
    {
        //!< local object
        cBoxVolume retObject;
        //!< volume addition.
        retObject.volume = obj.volumeCalculation() + this->volumeCalculation();
        //!< return object.
        return retObject;
    }
}
//!< taking input length.
int lengthInput()
{
    int l;
    std::cout<<"enter length"<<std::endl;
    std::cin>>l;
    return l;
}
//!< taking input width.
int widthInput()
{
    int w;
    std::cout<<"enter width"<<std::endl;
    std::cin>>w;
    return w;
}
//!< taking input height.
int heightInput()
{
    int h;
    std::cout<<"enter height"<<std::endl;
    std::cin>>h;
    return h;
}
//!< main function.
int main()
{
    //!< local variables.
    nBoxVolume::cBoxVolume AddVolume;
    //!< input collection.
    int ln = lengthInput();
    int wd = widthInput();
    int he = heightInput();

    //!< first box object.
    nBoxVolume::cBoxVolume Box1(ln,wd,he);

    //!< taking input for second box object.
    ln = lengthInput();
    wd = widthInput();
    he = heightInput();

    //!< box 2 object creation.
    nBoxVolume::cBoxVolume Box2(ln,wd,he);

    //!< volume addition function.
    AddVolume = Box2.volumeAddition(Box1);

    //!< display two object volume
    AddVolume.displayVolume() ;

}