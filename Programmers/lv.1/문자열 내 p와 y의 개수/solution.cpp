#include <string>
#include <iostream>
#include <tuple>
using namespace std;

tuple<int,int> return_num(string s){
    int a=0, b=0;
    for(int i =0; i<s.size(); i++){
        if(s[i]=='p' || s[i]=='P') a+=1;
        if(s[i]=='y' || s[i]=='Y') b+=1;
    }
    return {a, b};
}
bool solution(string s)
{
    int size = s.size();
    bool answer = true;
    auto[p, y] = return_num(s);
    if(p!=y){
        return false;
    }
    cout << p << y;
    return answer;
}