#include <bits/stdc++.h>
typedef long long ll;
using namespace std;    
#define mod 1000000007
constexpr array<int, 4> DY = {1, 0, -1, 0};
constexpr array<int, 4> DX = {0, 1, 0, -1};

int main(){
    int N; 
    cin >> N;
    vector<int> A(N);
    vector<vector<ll >> dp(N,vector<ll>(N,0));
    for(int i=0; i<N; i++) cin >> A[i];
    for(int i=0; i<N; i++) dp[N-1][i] = A[i];

    for(int i=N-2; i>=0; i--){
        for(int j=0; j<=i; j++){
            if(i%2 == 0) dp[i][j] = max(dp[i+1][j], dp[i+1][j+1]);
            else dp[i][j] = min(dp[i+1][j], dp[i+1][j+1]);
        }
    }

    // for(int i=0; i<N; i++){
    //     for(int j=0; j<i; j++){
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    cout << dp[0][0] << endl;
}