#include <bits/stdc++.h>
typedef long long ll;
using namespace std;    
#define mod 1000000007
constexpr array<int, 4> DY = {1, 0, -1, 0};
constexpr array<int, 4> DX = {0, 1, 0, -1};

int main(){
    int N;
    cin >> N;
    vector<int>h(N,0);
    vector<int>dp(N,INT_MAX);
    vector<int> ans;
    for(int i=0; i<N; i++) cin >> h[i];
    dp[0] = 0;
    dp[1] = abs(h[1] - h[0]);
    for(int i=2; i<N; i++){
        dp[i] = min(dp[i-1] + abs(h[i]-h[i-1]),dp[i-2] + abs(h[i]-h[i-2]));
    }

    int pos = N-1;
    while(true){
        ans.push_back(pos);
        if(pos == 0) break;

        if(dp[pos-1] + abs(h[pos -1] - h[pos]) == dp[pos]) pos = pos-1;
        else pos = pos-2;
    }
    reverse(ans.begin(),ans.end());

    cout << ans.size() << endl;
    for(int i=0; i<ans.size(); i++){
        cout << ans[i] + 1 << " ";
    }
 
}