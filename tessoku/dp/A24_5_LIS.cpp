#include <bits/stdc++.h>
typedef long long ll;
using namespace std;    
#define mod 1000000007
constexpr array<int, 4> DY = {1, 0, -1, 0};
constexpr array<int, 4> DX = {0, 1, 0, -1};

#define BitSet(arg, position) ((arg) |= (1LL << (position)))

int LEN = 0, L[100009];

int main(){
    int N;
    cin >> N;
    vector<ll> A(N);
    vector<ll> dp(N,INT_MIN);
    for(int i=0; i<N; i++) cin >> A[i];
    dp[0] = 1;
    for(int i=0; i<N; i++){
        int pos = lower_bound(L + 1, L + LEN + 1, A[i]) - L;
        dp[i] = pos;
        L[dp[i]] = A[i];
        if(dp[i] > LEN) LEN +=1;
    }

    cout << LEN << endl;

}