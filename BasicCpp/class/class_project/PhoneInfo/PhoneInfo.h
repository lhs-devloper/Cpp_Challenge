#include <iostream>
#include <string>
using namespace std;

class PhoneInfo
{
    private:
        string name_;
        string phone_number_;
        string address_
    public:
        PhoneInfo(const string& name, const string& phone_number, const string& address); 
        ~PhoneInfo(); // 소멸자
}
