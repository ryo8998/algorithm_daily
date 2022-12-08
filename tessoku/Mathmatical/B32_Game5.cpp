#include <bits/stdc++.h>
typedef long long ll;
using namespace std;    
#define mod 1000000007
constexpr array<int, 4> DY = {1, 0, -1, 0};
constexpr array<int, 4> DX = {0, 1, 0, -1};

int main(){
    int N,K;
    cin >> N >> K;
    vector<ll> A(K);
    for(int i=0; i<K; i++) cin >> A[i];
    vector<bool> dp(N+1);
     // falseを負けの状態、trueを勝ちの状態とする
    for(int i=0; i<=N; i++){
        for(int j=0; j<K; j++){
            if(i >= A[j] && dp[i-A[j]] == false){
                dp[i] = true;
                break;
            }else{
                dp[i] = false;
            }
        }
    }
    cout  << (dp[N]?"First":"Second") << endl;
}