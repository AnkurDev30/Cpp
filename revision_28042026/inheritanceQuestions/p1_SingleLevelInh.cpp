//Single inheritance (Vehicle → Car)

#include<iostream>
namespace nSingleLevelInh
{
    class cVehicle
    {
        private:
            int wheel;
            bool selfStart;
            int engineType; 
        protected:
        public:
            int iReadWheel();
            bool boReadSelfStart();
            int iReadEngineType();
    };
    int cVehicle::iReadWheel()
    {
        std::cout<<"enter number of wheels"<<std::endl;
        std::cin>>wheel;
        return wheel;
    }
    bool cVehicle::boReadSelfStart()
    {
        std::cout<<"enter self start staus 0 means no self start 1 means self start yes"<<std::endl;
        std::cin>>selfStart; 
        return   selfStart;    
    }
    int cVehicle::iReadEngineType()
    {
        std::cout<<"for 4 strock press 4 or for 2 strockpress 2"<<std::endl;
        std::cin>>engineType;
        return engineType;
    }
    class car :public cVehicle
    {
        private:
            int carWheel;
            bool selfStartWorking;
            int fourStrock;
        public:
            void vCarStatusCheck();
    };

    void car::vCarStatusCheck()
    {
        carWheel = iReadWheel();
        selfStartWorking= boReadSelfStart();
        fourStrock = iReadEngineType();
        if(carWheel==4 && selfStartWorking== true && fourStrock == 4)
        {
            std::cout<<"vehicle is car"<<std::endl;
        }
        else
        {
            std::cout<<"vehicle is not car"<<std::endl;
        }
    }
}
int main()
{
    nSingleLevelInh::car objCar;
    objCar.vCarStatusCheck();
    return 0;
}