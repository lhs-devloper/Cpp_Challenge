#include<iostream>

using namespace std;
int T, N;
long long fiboarr[50] = {0,1,};
long long fibonacci(int n) 
{
    if(n == 0 || n == 1)
        return fiboarr[n];
    else if(fiboarr[n] == 0)
        fiboarr[n] = fibonacci(n-1) + fibonacci(n-2);
    return fiboarr[n];
}
int main()
{
    cin >> T;
    for(int i=0; i<T; i++)
    {
        cin >> N;
        if(N==0)
        {
            cout << "1 0" << endl;
        }else{
            cout << fibonacci(N-1) << ' ' << fibonacci(N) << endl; 
        }
    }
    return 0;
}
/*
문제풀이: DP(동적계획법) 최적의 해를 구하는 알고리즘
1. 문제보고 ctrl+c, ctrl+v 하다가 컴파일에러(찾는데 한 세월)
2. 시간초과보고 재귀가 아닌 동적계획법확인(알고리즘 수정)
*/