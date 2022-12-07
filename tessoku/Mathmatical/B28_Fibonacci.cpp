#include <bits/stdc++.h>
typedef long long ll;
using namespace std;    
#define mod 1000000007
constexpr array<int, 4> DY = {1, 0, -1, 0};
constexpr array<int, 4> DX = {0, 1, 0, -1};

int main(){
    ll N;
    cin >> N;
    vector<ll> dp(N+1,0);
    dp[1] = 1;
    dp[2] = 1;
    for(int i=3; i<=N; i++){
        dp[i] = dp[i-1] + dp[i-2];
        dp[i]%=mod;
    }
    cout << dp[N] << endl;
}