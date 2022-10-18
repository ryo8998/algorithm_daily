#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
#define mod 1000000007
constexpr array<int, 4> DY = {1, 0, -1, 0};
constexpr array<int, 4> DX = {0, 1, 0, -1};

int main(){
    int N,Q;
    cin >> N >> Q;
    vector<int> A(N);
    vector<int> S(N+1);
    for(int i=0; i<N; i++) cin >> A[i];
    S[0] = 0;
    for(int i=1; i<=N; i++) S[i] = S[i-1] + A[i-1];
    for(int i=0; i<Q; i++){
        int L,R;
        cin >> L >> R;
        cout << S[R] - S[L-1] << endl;
    }
}