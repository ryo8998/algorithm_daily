#include <bits/stdc++.h>
typedef long long ll;
using namespace std;    
#define mod 1000000007
constexpr array<int, 4> DY = {1, 0, -1, 0};
constexpr array<int, 4> DX = {0, 1, 0, -1};

int main(){
    string S,T;
    cin >> S >> T;
    vector<vector<ll>> dp(S.length()+1,vector<ll>(T.length()+1,INT_MAX));
    dp[0][0] = 0;
    for(int i=0; i<=S.length(); i++){
        for(int j=0; j<=T.length(); j++){
            if(i + 1 <= S.length()){
                dp[i+1][j] = min(dp[i+1][j], dp[i][j]+1);
            }
            if(j + 1 <= T.length()){
                dp[i][j+1] = min(dp[i][j+1],dp[i][j]+1);
            }
            if(i+1 <= S.length() && j+1 <=T.length()){
                if(S[i] == T[j]){
                    dp[i+1][j+1] = min(dp[i+1][j+1], dp[i][j]);
                }else{
                    dp[i+1][j+1] = min(dp[i+1][j+1], dp[i][j]+1);
                }
            }
        }
    }
    cout << dp[S.length()][T.length()] << endl;

    // for(int i=0; i<=S.length(); i++){
    //     for(int j=0; j<=T.length(); j++){
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << endl;
    // }

}