#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr)
{
    vector<int> answer;
    int prev = arr[0];

    for (int i = 0; i < arr.size(); i++)
    {
        if (prev != arr[i])
        {
            answer.push_back(prev);
            prev = arr[i];
        }
    }
    answer.push_back(arr[arr.size() - 1]);

    return answer;
}