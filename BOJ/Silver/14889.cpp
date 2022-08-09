#include<iostream>
#include<math.h>

using namespace std;
const int MAX=21;
int N;
int answer = 100000000;
int TEAM[MAX][MAX];
int max_case = 200;
bool check[22];
void dfs(int value, int next_value)
{
    if(value==N /2)
    {
        int start, link;
        start = 0;
        link = 0;
        
        for(int i=1; i<=N; i++)
        {
            for(int j=1; j<=N; j++)
            {
                if(check[i]==true && check[j]==true) start+=TEAM[i][j];
                if(check[i]==false && check[j]==false) link+=TEAM[i][j];
            }
        }
        int temp = abs(start-link);
        if(answer>temp) answer = temp;
        
        return;
    }
    for(int i=next_value; i<N; i++)
    {
        check[i] = true;
        dfs(value+1, i+1);
        check[i] = false;
    }
    return;
}
int main()
{
    cin >> N;
    for(int i=1; i<=N; i++)
    {
        for(int j=1; j<=N; j++)
        {
            cin >> TEAM[i][j];
        }
    }
    dfs(0, 1);
    cout << answer << endl;
    return 0;
}
/*
문제 접근 방법: 백트래킹(DFS활용) start팀과 link팀을 생각하면서 경우의 수를 확인 => 경우의 수 중 가장 낮은 값을 저장해서 답 출력
*/