#include <bits/stdc++.h>
typedef long long ll;
using namespace std;    
#define mod 1000000007
constexpr array<int, 4> DY = {1, 0, -1, 0};
constexpr array<int, 4> DX = {0, 1, 0, -1};

int main(){
    int N,A,B;
    cin >> N >> A >> B;
    vector<bool> dp(N+1);
     // falseを負けの状態、trueを勝ちの状態とする
    for(int i=0; i<=N; i++){
        if(i >= A && dp[i-A] == false){
            dp[i] = true;
        }else if(i>=B && dp[i-B] == false){
            dp[i] = true;
        }else{
            dp[i] = false;
        }
    }
    cout  << (dp[N]?"First":"Second") << endl;
}