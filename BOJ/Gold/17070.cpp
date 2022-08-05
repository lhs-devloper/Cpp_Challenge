#include<iostream>
#include<algorithm>
using namespace std;

int N;
int map[17][17];
int answer = 0;
// 시계방향으로 이동밖에 못함(문제 읽으면 확인가능합니다!)
int dx[3] = {0,1,1};
int dy[3] = {1,0,1};

// 벽 긁히는 확인 코드
bool check(int x, int y){
    if(x<1 or x>N or y<1 or y>N or map[x][y]==1) return false;
    else return true;
}
// DFS
void dfs(int x, int y, int dir){
    if(x==N and y==N){
        answer++;
        return;
    }
    for(int i=0; i<3; i++){
        if((dir==0 and i==1)or(dir==1 and i==0)) continue;
        int nx = x+dx[i];
        int ny = y+dy[i];
        if(check(nx,ny)==false) continue;
        if((i==2)and (map[x+1][y]==1 or map[x][y+1]==1)) continue;
        dfs(nx, ny, i);
    }
}

int main(){
    cin >> N;
    for(int i=1; i<=N; i++){
        for(int j=1; j<=N; j++){
            cin >> map[i][j];
        }
    }
    dfs(1, 2, 0);
    cout << answer;
    return 0;
}
/*
문제 접근 방법: DFS(경우의 수 구하기에 가장 적합하여 선택)
BFS: 최단거리구하기
*/