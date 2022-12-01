#include <bits/stdc++.h>
typedef long long ll;
using namespace std;    
#define mod 1000000007
constexpr array<int, 4> DY = {1, 0, -1, 0};
constexpr array<int, 4> DX = {0, 1, 0, -1};

int main(){
    ll N;
    cin >> N;
    vector<ll> A(N);
    vector<ll> B(N);
    vector<ll> dp(N+1,INT_MIN);
    for(int i=1; i<=N-1; i++){
        cin >> A[i];
    }
    for(int i=1; i<=N-1; i++){
        cin >> B[i];
    }
    dp[1] = 0;
    for(int i=1; i<N; i++){
        dp[A[i]] = max(dp[A[i]], dp[i] + 100);
        dp[B[i]] = max(dp[B[i]], dp[i] + 150); 
    }

    cout << dp[N] << endl;

}