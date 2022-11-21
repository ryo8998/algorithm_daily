#include <bits/stdc++.h>
typedef long long ll;
using namespace std;    
#define mod 1000000007
constexpr array<int, 4> DY = {1, 0, -1, 0};
constexpr array<int, 4> DX = {0, 1, 0, -1};

int main(){
    string S,T;
    cin >> S >> T;
    vector<vector<ll>> dp(S.length()+1,vector<ll>(T.length()+1));
    dp[0][0] = 0;
    for(int i=1; i<=S.length(); i++){
        for(int j=0; j<=T.length(); j++){
            if(j != 0){
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
                if(S[i-1]== T[j-1]){
                    dp[i][j] = max(dp[i][j], dp[i-1][j-1] + 1);
                }
            }else{
                dp[i][j] = dp[i-1][j];
                if(S[i-1]== T[j-1]){
                    dp[i][j] = max(dp[i][j], dp[i-1][j-1] + 1);
                }
            }
        }
    }

    cout << dp[S.length()][T.length()] << endl;
}