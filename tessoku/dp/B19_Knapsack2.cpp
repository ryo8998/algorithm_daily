#include <bits/stdc++.h>
typedef long long ll;
using namespace std;    
#define mod 1000000007
constexpr array<int, 4> DY = {1, 0, -1, 0};
constexpr array<int, 4> DX = {0, 1, 0, -1};

int main(){
    int N, W;
    cin >> N >> W;
    vector<pair<ll,ll>> A(N);
    vector<vector<ll >>dp(N+1, vector<ll>(1000001,INT_MAX));
    for(int i=0; i<N; i++){
        int w,v;
        cin >> w >> v;
        A[i] = {w,v};
    } 
    dp[0][0] = 0;
    for(int i=0; i<=N; i++){
        for(int j=0; j<=1000000; j++){
            if(dp[i][j] == INT_MAX) continue;
            if(i + 1 > N) continue;
            dp[i+1][j] = min(dp[i][j],dp[i+1][j]);
            if(j + A[i].second >1000000) continue;
            dp[i+1][j + A[i].second] = min(dp[i][j] + A[i].first,dp[i+1][j + A[i].second]);
        }
    }
    ll ans = 0;
    for(int i=0; i<=1000000; i++){
        if(dp[N][i] <= W && i > ans) {
            ans = i;
        }
    }
    cout << ans << endl;
}