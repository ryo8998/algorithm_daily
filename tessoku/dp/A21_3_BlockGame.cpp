#include <bits/stdc++.h>
typedef long long ll;
using namespace std;    
#define mod 1000000007
constexpr array<int, 4> DY = {1, 0, -1, 0};
constexpr array<int, 4> DX = {0, 1, 0, -1};

int main(){
    int N;
    cin >> N;
    vector<int> P(N+1,0);
    vector<int> A(N+1,0);
    vector<vector<int>> dp(N+1,vector<int>(N+1));
    for(int i=1; i<=N; i++){
        int p,a;
        cin >> p >> a;
        P[i] = p;
        A[i] = a;
    }
    dp[1][N];
    for(int len = N - 2; len >=0; len-- ){
        for(int l= 1; l<=N-len; l++){
            int r = l + len;

            int score1 = 0;
            if(l<=P[l-1] && P[l-1]<=r) score1 = A[l-1];

            int score2 = 0;
            if(l<=P[r+1] && P[r+1]<=r) score2 = A[r+1];

            if(l == 1){
                dp[l][r] = dp[l][r+1] + score2;
            }else if(r == N){
                dp[l][r] = dp[l-1][r] + score1;
            }else {
                dp[l][r] = max(dp[l-1][r] + score1, dp[l][r+1] + score2);
            }
        }
    }

    int ans = 0;
    for(int i=1; i<=N; i++){
        ans = max(ans, dp[i][i]);
    }
    cout << ans << endl;

}