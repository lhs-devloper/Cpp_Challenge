#include <string>
#include <vector>
#include <iostream>
using namespace std;

int range_a, range_b;
long long solution(int a, int b) {
    long long answer = 0;
    range_a = (a>b)? b:a;
    range_b = (a>b)? a:b;
    for(int i=range_a; i<=range_b; i++){
        answer+=i;
    }
    return answer;
}