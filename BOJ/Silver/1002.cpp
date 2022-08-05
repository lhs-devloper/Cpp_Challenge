// Link: https://www.acmicpc.net/submit/1002/47221009
#include <iostream>

using namespace std;
int T;
int x1, y1, r1, x2, y2, r2;
int main() {
    cin >> T;
    while(T--) {
        cin >> x1 >> y1 >> r1 >>x2 >>y2 >> r2;
        int dx = x1-x2;
        int dy = y1-y2;

        if (r1 > r2) swap(r1, r2);
        int add = r1 + r2;
        add = add * add;
        int sub = r2 - r1;
        sub = sub * sub;
        int d = dx*dx + dy*dy;
        
        // 원이 두 점에서 만난 경우
        if (d < add && d > sub) {
            cout << 2; // 외접한 경우
        } else if (d == add || (d == sub && d != 0) ) {
            cout << 1; // 내접한 경우
        } else if (d < sub || d > add) {
            cout << 0;
        } else if (d ==0) {
            if (r1 == r2) // 일치하여 무한히 만나는경우
                cout << -1;
            else
                cout << 0; // 일치하지 않아 만나지 못하는 경우
        }
        cout << '\n';
    }
    return 0;  
}
/*
문제 접근 방법: 기하학(두 원이 만나는 지점) 외접, 내접, 두점, 일치, 만나지 않는 경우
*/