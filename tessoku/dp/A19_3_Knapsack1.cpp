#include <bits/stdc++.h>
typedef long long ll;
using namespace std;    
#define mod 1000000007
constexpr array<int, 4> DY = {1, 0, -1, 0};
constexpr array<int, 4> DX = {0, 1, 0, -1};

int main(){
    int N,W;
    cin >> N >> W;
    vector<pair<int,int>> A(N+1);
    vector<vector<ll>>dp(N+1,vector<ll>(W+1,-1));
    for(int i=1; i<=N; i++){
        int w,v;
        cin >> w >> v;
        A[i] = {w,v};
    }
    // for(int i=0; i<N; i++){
    //     cout << A[i].first << endl;
    //     cout << A[i].second << endl;
    //     cout << endl;
    // }
    dp[0][0] = 0;
    for(int i=1; i<=N; i++){
        for(int j=0; j<=W; j++){
            if(j - A[i].first >= 0){
                dp[i][j] = max(dp[i-1][j] , dp[i-1][j - A[i].first] + A[i].second);
            }else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    ll max_num = 0;
    for(int j=0; j<=W; j++){
       max_num = max(max_num, dp[N][j]);
    }
    cout << max_num << endl;
}   