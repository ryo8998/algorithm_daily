#include <bits/stdc++.h>
typedef long long ll;
using namespace std;    
#define mod 1000000007
constexpr array<int, 4> DY = {1, 0, -1, 0};
constexpr array<int, 4> DX = {0, 1, 0, -1};

int main(){
    int N, S;
    cin >> N >> S;
    vector<int> A(N);
    for(int i=0; i<N; i++) cin >> A[i];
    vector<vector<bool>> dp(N+1,vector<bool>(S+1,false));
    dp[0][0] = true;
    for(int i=0; i<=N; i++){
        for(int j=0; j<=S; j++){
            if(dp[i][j] == false) continue;
            if(i + 1 > N) continue;
            dp[i+1][j] = true;
            if(j + A[i] > S) continue;
            dp[i+1][j+A[i]] = true;
        }
    }
    for(int i=0; i<=N; i++){
        if(dp[i][S] == true) {
            cout << "Yes" << endl;
            return 0;
        } 
    }
    cout << "No" << endl;
    return 0;
}