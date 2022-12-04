#include <bits/stdc++.h>
typedef long long ll;
using namespace std;    
#define mod 1000000007
constexpr array<int, 4> DY = {1, 0, -1, 0};
constexpr array<int, 4> DX = {0, 1, 0, -1};


int main(){
    int H,W;
    cin >> H >> W;
    vector<string> maze(H);
    vector<vector<ll>> dp(H+1,vector<ll>(W+1,0));
    for(int i=0; i<H; i++) cin >> maze[i];
    dp[0][0] = 1;
    for(int i=0; i<H; i++){
        for(int j=0; j<W; j++){
            if(dp[i][j] == INT_MAX) continue;
            if(j < W-1 &&maze[i][j+1] == '.'){
                dp[i][j+1] +=  dp[i][j];
            }
            if(i < H-1 && maze[i+1][j] == '.'){
                dp[i+1][j] += dp[i][j];
            }
        }
    }
    cout << dp[H-1][W-1] << endl;
}