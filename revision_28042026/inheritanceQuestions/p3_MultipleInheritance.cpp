//Multiple inheritance
#include<iostream>
namespace nBody
{
    class cHead
    {
        protected:
            int nose;
            int eyes;
            int ears;
            int teeth;
        public:
            void vReadFaceParts()
            {
                std::cout<<"enter parts of face"<<std::endl;
                std::cout<<"enter nose"<<std::endl;
                std::cin>>nose;
                std::cout<<"enter eyes"<<std::endl;
                std::cin>>eyes;
                std::cout<<"enter ears"<<std::endl;
                std::cin>>ears;
                std::cout<<"enter teeth"<<std::endl;
                std::cin>>teeth;
            }
    };
    class cBodyStructure
    {
        protected:
            int hand;
            int legs;
            int tail;
        public:
            void vBodyParts()
            {
                std::cout<<"enter parts of body"<<std::endl;
                std::cout<<"enter hand"<<std::endl;
                std::cin>>hand;
                std::cout<<"enter legs"<<std::endl;
                std::cin>>legs;
                std::cout<<"enter tail"<<std::endl;
                std::cin>>tail;
            }
    };
    class cOperation:public cBodyStructure,public cHead
    {
        public:
            void vPrintParts(); 
            void vOperation()
            {
                vReadFaceParts();
                vBodyParts();
              //  vPrintParts(); //this is for debug purposre
                if(( nose == 1 && eyes <= 2 && ears <= 2 && teeth <=32 )&&
                (hand <= 2 && legs <= 2 && tail == 0))
                {
                    std::cout<<"human being"<<std::endl;
                }
                else
                {
                    std::cout<<"other species"<<std::endl;
                }
            }
    };
    void cOperation::vPrintParts()
    {
        std::cout << "nose=" << nose
          << ", eyes=" << eyes
          << ", ears=" << ears
          << ", teeth=" << teeth
          << ", hand=" << hand
          << ", legs=" << legs
          << ", tail=" << tail
          << std::endl;
    }
}
int main()
{
    nBody::cOperation obj;
    obj.vOperation();
}