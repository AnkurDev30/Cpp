//child class should not force for unwanted functions
class vehicle
{
    public:
        virtual void carOn();
        virtual void carOff();
        virtual void tractorOn();
        virtual void tractorOff();
        virtual void bikeOn();
        virtual void bikeOff();
        virtual void bustorOn();
        virtual void bustorOff();
};
class car:public vehicle
{
         void carOn()
        {

        }
         void carOff()
        {

        }
         void tractorOn()
        {

        }
         void tractorOff()
        {

        }
         void bikeOn()
        {

        }
         void bikeOff()
        {

        }
         void bustorOn()
        {

        }
         void bustorOff()
        {

        } 
};