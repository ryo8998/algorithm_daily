#include <bits/stdc++.h>
typedef long long ll;
using namespace std;    
#define mod 1000000007
constexpr array<int, 4> DY = {1, 0, -1, 0};
constexpr array<int, 4> DX = {0, 1, 0, -1};

int main(){
    ll N,Q;
    cin >> N >> Q;
    vector<ll> A(N+1);
    for(int i=1; i<=N; i++){
        cin >> A[i];
    }
    vector<vector<ll>> dp(32,vector<ll>(100009));

    //前計算
    for(int i=1; i<=N; i++) dp[0][i] = A[i];
    for(int d = 1; d <= 29; d++){
        for(int i=1; i<=N; i++){
            dp[d][i] = dp[d-1][dp[d-1][i]];
        }
    }

    //クエリ処理
    for(int j=1; j<=Q; j++){
        ll current,days;
        cin >> current >> days;
        for(int d=29; d>=0; d--){
            if(days / (1 << d) % 2 !=0){
                current = dp[d][current];
            }
        }
        cout << current << endl;
    }

}