#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
#define mod 1000000007
constexpr array<int, 4> DY = {1, 0, -1, 0};
constexpr array<int, 4> DX = {0, 1, 0, -1};

int main(){
    int H,N;
    cin >> H >> N;
    vector<int> dp(H+1,1e9);
    dp[0] = 0;
    for(int i=0; i<N; i++){
        int a,b;
        cin >> a >> b;
        for(int j=0; j<H; j++){
            int nj  = min(j+a,H);
            dp[nj] = min(dp[nj], dp[j] + b);
            // cout << dp[nj] << endl;
        }
    }
    cout << dp[H] << endl;
}