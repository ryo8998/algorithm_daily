#include <bits/stdc++.h>
typedef long long ll;
using namespace std;    
#define mod 1000000007
constexpr array<int, 4> DY = {1, 0, -1, 0};
constexpr array<int, 4> DX = {0, 1, 0, -1};

int main(){
    string S;
    cin >> S;
    stack<pair<int,char>> Stack;
    for(int i=0; i<S.length(); i++){
        if(S[i] == '('){
            Stack.push({i+1,'('});
        }else{
            pair<int,char> t;
            t = Stack.top();
            Stack.pop();
            cout << t.first << " " << i + 1 << endl;
        }
    }
}