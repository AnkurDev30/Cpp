/*******************************************
comparing 2 objects by using this pointer
*******************************************/


//!< header files
#include<iostream>


//namespace definations
namespace nCompare
{
    //!< class defination
    class cCompare
    {
        private:
            //!<data members
            int var;
        public:
        //!< construction
            cCompare(int val):var(val)
            {
                std::cout<<"address of "<<this<<std::endl;
            }
            //!< function
            void comapreFun(cCompare obj)
            {

                if(this->var > obj.var)
                {
                    std::cout<<"current object is greater "<<this<<std::endl;
                }
                else
                {
                    std::cout<<"another object is greater "<<std::endl;
                }

            }
    };
}
//!< main function.
int main()
{
  nCompare::cCompare  obj1(7);
  nCompare::cCompare  obj2(5);

  obj1.comapreFun(obj2);

  nCompare::cCompare  obj3(17);
  nCompare::cCompare  obj4(25);

  obj4.comapreFun(obj3);

  nCompare::cCompare  obj5(17);
  nCompare::cCompare  obj6(25);

  obj5.comapreFun(obj6);


}