#include <bits/stdc++.h>
typedef long long ll;
using namespace std;    
#define mod 1000000007
constexpr array<int, 4> DY = {1, 0, -1, 0};
constexpr array<int, 4> DX = {0, 1, 0, -1};

int main(){
    int N;
    cin >> N;
    vector<int>A(N,0);
    vector<int>B(N,0);
    vector<int> dp(N,INT_MAX);
    for(int i=1; i<N; i++) cin >>A[i];
    for(int i=2; i<N; i++) cin >>B[i];
    dp[0] = 0;
    for(int i=1; i<N; i++){
        if(i==1){
            dp[i] = dp[i-1] + A[i];
        }else{
            dp[i] = min(dp[i],dp[i-1] + A[i]);
            dp[i] = min(dp[i],dp[i-2] + B[i]);
        }
    }
    cout << dp[N-1] << endl;
}