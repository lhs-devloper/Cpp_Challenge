#include <iostream>
#include "Car.h"

int main()
{
    Car Avante("Avante");
    Car Sonata("Sonata", 60);
    Car Grandure("Grandure", 64);
    
    Avante.PowerOn();
    Sonata.PowerOn();
    Grandure.PowerOn();

    Avante.PowerOff();
    Sonata.PowerOff();
    Grandure.PowerOff();

    Avante.PowerOff(); // 시동이 꺼져있는데 켜져있는지 확인
    return 0;
}