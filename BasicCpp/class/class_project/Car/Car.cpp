#include <iostream>
#include "Car.h"

using namespace std;
Car::Car(const string& name)
{
    name_ = name;
    fuel_ = 0;
    power_ = false;
}

Car::Car(const string& name, int fuel)
{
    name_ name;
    fuel_ = fuel;
    power_ = false;
}

Car::~Car() {}
void Car::PowerOn()
{
    if(power_ == true)
    {
        cout << "이미 시동이 켜져있습니다." << endl;
        return;
    }
    else
    {
        power_ = true;
        return;
    }
    
}

void Car::PowerOff()
{
    if(power_ == false)
    {
        cout << "이미 시동이 꺼져있습니다." << endl;
        return;
    }
    else
    {
        power_ = false;
        return;
    }
}