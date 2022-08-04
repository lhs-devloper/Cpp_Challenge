#include<vector>
#include<queue>
#include<iostream>
using namespace std;
// 상하좌우
int dx[4] = {0, 0, -1, 1};
int dy[4] = {1, -1, 0, 0};
// 방문흔적
bool visit[100][100];
// BFS(최단거리) vs DFS(경우의 수)
int solution(vector<vector<int> > maps)
{
    int answer = 0;
    int N = maps.size();
    int M = maps[0].size();
    queue<pair<int, int>>q;
    q.push({0,0});
    visit[0][0]=1;
    // Q로 구현한 BFS
    while(!q.empty()){
        int size = q.size();
        answer++;
        while (size--){
            int x = q.front().first;
            int y = q.front().second;
            // 목적지 도달시 answer return
            if(x==N-1&&y==M-1) return answer;
            q.pop();
            for (int i=0; i<4;i++){
                int cx = x+dx[i];
                int cy = y+dy[i];
                if(cx>=0 and cx < N and cy>=0 and cy<M and maps[cx][cy] and !visit[cx][cy]){
                    visit[cx][cy] = 1;
                    q.push({cx,cy});
                }
            }
        }
    }
    // 찾지 못할 시
    return -1;
}