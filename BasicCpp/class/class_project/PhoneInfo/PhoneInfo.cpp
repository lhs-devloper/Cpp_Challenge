#include "PhoneInfo.h"
#include <iostream>

using namespace std;

PhoneInfo::PhoneInfo(const string &name, const string &phone_number,
                     const string &address) {
  name_ = name;
  phone_number_ = phone_number;
  address_ = address;
}

PhoneInfo::~PhoneInfo() {}

void PhoneInfo::ShowInfo() {
  cout << "이름: " << name_ << endl;
  cout << "전화번호부: " << phone_number_ << endl;
  cout << "주소: " << address_ << endl;
  return;
}
