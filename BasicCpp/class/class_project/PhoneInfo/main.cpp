#include<iostream>
#include<vector>
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
        // 예외처리
        if(!cin)
        {
            cout << "정수만 입력해주세요" << endl;
            cin.clear();
            cin.ignore();
        }
        else
        {

        }
    }
    return 0;
}