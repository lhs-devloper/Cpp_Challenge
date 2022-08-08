#include <string>
#include <vector>
#include <cmath>
#include <iostream>
using namespace std;
bool prime_num(int num)
{
    int n = (int) sqrt(num);
    for(int i=2; i<= n; i++) if(num%i == 0) return false;
    return true;
}
int solution(int n) {
    int answer = 0;
    vector<int> arr;
    for(int i=2; i<=n; i++)
    {
        bool check_prime = prime_num(i);
        if(check_prime)
        {
            arr.push_back(i);
        }
    }
    answer = arr.size();
    return answer;
}