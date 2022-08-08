#include<iostream>
#include<cmath>

using namespace std;

int T, n, answer, answer_A, answer_B;
bool caseA, caseB;
bool prime_num(int num)
{
    int x = (int) sqrt(num);
	for (int i = 2; i <= x; i++) if (num % i == 0) return false;
	return true;
}

int main()
{
    cin >> T;
    for(int i=0; i<T; i++){
        cin >> n;
        answer = n/2;
        answer_A = answer;
        answer_B = answer;
        while(true){
            caseA = prime_num(answer_A);
            caseB = prime_num(answer_B);
            if(caseA && caseB) break;
            --answer_A;
            ++answer_B;
        }
      cout << answer_A << " " << answer_B << endl;
    }
    return 0;
}
/*
문제 접근 방법: 기하학(에리스토테네스의 체) 제곱근을 활용하여 소수를 찾아내는 풀이방식
*/