#include <iostream>
#include <string>
using namespace std;

class Car
{
    private:
        string name_;
        int fuel_;
        bool power_;
    public:
        Car(const string& name); // 생성자
        Car(const string& name, int fuel); // 생성자 다중 정의
        void PowerOn();
        void PowerOff();
        ~Car(); // 소멸자
};
