#include<iostream>
#include<vector>
#include<string>
#include "PhoneInfo.h"

using namespace std;

int Input_Num;
int main()
{
    vector<PhoneInfo> class_vector;
    while(true)
    {
        cout << "숫자입력을 눌러주세요: ";
        cin >> Input_Num;
        if(!cin)
        {
            cout << "정수만 입력해주세요" << endl;
            cin.clear();
            cin.ignore();
        }
        else
        {
          string name;
          string phone_number;
          string address;
          for(int i=0; i<3; i++)
          {
            cout << "이름을 입력해주세요: ";
            cin >> name;
            cout << "전화번호를 입력해주세요: ";
            cin >> phone_number;
            cout << "주소를 입력해주세요: ";
            cin >> address;
            PhoneInfo pi(name, phone_number, address);
            class_vector.push_back(pi);  
          }
          for(int i=0; i<3; i++)
          {
            class_vector[i].ShowInfo();  
          }
          break;
        }
    }
    return 0;
}