#include <bits/stdc++.h>
typedef long long ll;
using namespace std;    
#define mod 1000000007
constexpr array<int, 4> DY = {1, 0, -1, 0};
constexpr array<int, 4> DX = {0, 1, 0, -1};

int main(){
    ll N,M;
    cin >> N >> M;
    vector<ll> A(M);
    vector<ll> score(N);
    for(int i=0; i<M; i++)cin >> A[i];
    for(int i=0; i<M; i++){
        score[A[i]-1]++;
    }
    for(int i=0; i<N; i++){
        cout << M - score[i] << endl;
    }
}