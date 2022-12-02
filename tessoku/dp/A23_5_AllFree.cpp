#include <bits/stdc++.h>
typedef long long ll;
using namespace std;    
#define mod 1000000007
constexpr array<int, 4> DY = {1, 0, -1, 0};
constexpr array<int, 4> DX = {0, 1, 0, -1};

#define BitSet(arg, position) ((arg) |= (1LL << (position)))

int main(){
    ll N, M;
    cin >> N >> M;
    vector<vector<ll>> dp(M+1,vector<ll>(1<<N,INT_MAX));
    dp[0][0] = 0;
    for(int i=0; i<M; i++){
        int buy = 0;
        for(int j=0; j<N; j++){
            int temp = 0;
            cin >> temp;
            if(temp == 1){
                BitSet(buy, j);
            }
        }

        for(int k=0; k<(1<<N); k++){
            dp[i+1][k] = min(dp[i+1][k],dp[i][k]);
            dp[i+1][k | buy] = min(dp[i+1][k | buy], dp[i][k] + 1);
        }
    }

    ll ans = dp[M][(1<<N)-1];
    if(ans == INT_MAX){
        ans = -1;
    }

    cout << ans << endl;
    // for(int i=0; i<M; i++){
    //     for(int j=0; j<(1<<N); j++){
    //         cout << dp[i][j] <<" ";
    //     }
    //     cout << endl;
    // }
 
}