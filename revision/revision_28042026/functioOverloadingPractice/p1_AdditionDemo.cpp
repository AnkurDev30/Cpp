//Add (int, int) & (float, float)
#include<iostream>
namespace Addition
{
    class Add
    {
        private:
            //  int iFirstNum,iSecondNum;
           //   float fFirstNum,fSecondNum;
        public:
            //  Add(int a,int b):iFirstNum(a),iSecondNum(b){
            //   std::cout<<"int constructor"<<std::endl;
            //  }

            //  Add(float a,float b):fFirstNum(a),fSecondNum(b){
            //   std::cout<<"float constructor"<<std::endl;
            //  }
            void add(int a,int b)
            {
                int result = a+b;
                std::cout<<"result = "<<result<<std::endl;
            }
            void add(float a,float b)
            {
                float result = a+b;
                std::cout<<"result = "<<result<<std::endl;
            }
    };
}
int main()
{
    int a, b;
    float f1,f2;
    std::cout<<"give 2 integer num"<<std::endl;
    std::cin>>a>>b;
    std::cout<<"give 2 float num"<<std::endl;
    std::cin>>f1>>f2;
    //object creation:
    Addition::Add obj1;

    //  !< same name construtor 
    //  Addition::Add obj1(a,b); wrong no need to constutor overloading
    //  Addition::Add obj2(f1,f2);

    //!< same name function means function overloading.
    obj1.add(a,b);
    obj1.add(f1,f2);

}