#include <bits/stdc++.h>
typedef long long ll;
using namespace std;    
#define mod 1000000007
constexpr array<int, 4> DY = {1, 0, -1, 0};
constexpr array<int, 4> DX = {0, 1, 0, -1};

int main(){
    ll N;
    cin >> N;
    vector<ll> A(N-1);
    vector<ll> B(N-2);
    vector<ll> dp(N,INT_MAX);
    for(int i=0; i<N-1; i++) cin >> A[i];
    for(int i=0; i<N-2; i++) cin >> B[i];
    dp[0] = 0;
    for(int i=0; i<N; i++){
        if(i < N-1){
            dp[i + 1] = min(dp[i + 1], dp[i] + A[i]);
        }
        if(i < N-2){
            dp[i + 2] = min(dp[i + 2], dp[i] + B[i]);
        }
    }
    cout << dp[N-1] << endl;

    // for(int i=0; i<N; i++){
    //     cout << dp[i] << endl;
    // }

}