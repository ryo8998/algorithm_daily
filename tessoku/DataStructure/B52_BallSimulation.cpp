#include <bits/stdc++.h>
typedef long long ll;
using namespace std;    
#define mod 1000000007
constexpr array<int, 4> DY = {1, 0, -1, 0};
constexpr array<int, 4> DX = {0, 1, 0, -1};

int main(){
    ll N,X;
    cin >> N >> X;
    vector<char> A(N+1);
    for(int i=1; i<=N; i++) cin >> A[i];
    queue<ll> Queue;
    Queue.push(X);
    A[X] = '@';
    while(!Queue.empty()){
        ll tmp = Queue.front();
        Queue.pop();
        if(tmp -1 >= 1 && A[tmp- 1] == '.'){
            A[tmp- 1] = '@';
            Queue.push(tmp-1);
        }
        if(tmp + 1 <= N && A[tmp+ 1] == '.'){
            A[tmp + 1] = '@';
            Queue.push(tmp+1);
        }
    }
    for(int i=1; i<=N; i++){
        cout << A[i];
    }
    cout << endl;
}