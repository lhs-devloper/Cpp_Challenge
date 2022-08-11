#include <iostream>
#include "PhoneInfo.h"

using namespace std;
PhoneInfo::PhoneInfo(const string& name, const string& phone_number, const string& address)
{
    name_ = name;
    phone_number_ = phone_number;
    address_ = address;
}
