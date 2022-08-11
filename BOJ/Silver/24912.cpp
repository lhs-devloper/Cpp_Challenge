#include<iostream>
using namespace std;
int n, arr[1000001];
int main()
{
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    // 1개인 경우
    if(n==1)
    {
      if(arr[0]==0) cout << 1;
      else cout << arr[0];
      return 0;
    }
    // 색칠 안되는 경우
    for(int i=0; i<n-1; i++)
    {
      if(arr[i]&&arr[i]==arr[i+1])
      {
        cout << -1;
        return 0;
      }
    }
    // 이외의 경우
    for(int i=0; i<n; i++)
    {
        if(arr[i]==0)
        {
          if(i==0)
          {
            for(int j=1; j<4; j++)
            {
              if(arr[i+1]!=j)
              {
                arr[i]=j;
                break;
              }
            }
          }
        else if(i==n-1)
        {
          for(int j=1; j<4; j++)
          {
            if(arr[n-2]!=j)
            {
              arr[n-1]=j;
              break;
            }
          }
        }
        else
        {
          for(int j=1; j<4; j++)
          {
            if(arr[i-1]!=j && arr[i+1]!=j)
            {
              arr[i]=j;
              break;
            }
          }
        }
        }
    }
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
}
/*
문제풀이: 구현(노가다) 효율적인거 발견하면 수정예정
*/