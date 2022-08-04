#include <string>
#include <vector>

using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0;
    // 정렬
    sort(people.begin(), people.end());
    int idx=0;
    // 맨 뒷사람부터 구출 (만약 맨뒤사람과 맨앞사람의 합이 limit넘어가지 않을 때 idx++)
    while(idx < people.size()){
        int back = people.back();
        people.pop_back();
        if(people[idx]+back<=limit){
            answer++;
            idx++;
        }else{
            answer++;
        }
    }
    return answer;
}