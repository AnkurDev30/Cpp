
#include <iostream>
using namespace std;

class Fan;

class FanState
{
public:
    virtual void pressPower(Fan& fan) = 0;
    virtual void handle() = 0;
    virtual ~FanState() = default;
};

class OffState : public FanState
{
public:
    static OffState& instance()
    {
        static OffState obj;
        return obj;
    }

    void pressPower(Fan& fan) override;
    void handle() override
    {
        cout << "Fan is OFF\n";
    }
};

class OnState : public FanState
{
public:
    static OnState& instance()
    {
        static OnState obj;
        return obj;
    }

    void pressPower(Fan& fan) override;
    void handle() override
    {
        cout << "Fan is ON\n";
    }
};

class Fan
{
private:
    FanState* state;

public:
    Fan();

    void setState(FanState* s)
    {
        state = s;
    }

    void pressPower()
    {
        state->pressPower(*this);
    }

    void handle()
    {
        state->handle();
    }
};

void OffState::pressPower(Fan& fan)
{
    fan.setState(&OnState::instance());
}

void OnState::pressPower(Fan& fan)
{
    fan.setState(&OffState::instance());
}

Fan::Fan() : state(&OffState::instance()) {}

int main()
{
    Fan fan;

    fan.handle();       // OFF

    fan.pressPower();
    fan.handle();       // ON

    fan.pressPower();
    fan.handle();       // OFF
}
