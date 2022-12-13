#include <bits/stdc++.h>
typedef long long ll;
using namespace std;    
#define mod 1000000007
constexpr array<int, 4> DY = {1, 0, -1, 0};
constexpr array<int, 4> DX = {0, 1, 0, -1};

int main(){
    int D,N;
    cin >> D >> N;
    vector<ll> L(N);
    vector<ll> R(N);
    vector<ll> H(N);
    vector<ll> LIM(D,24);
    for(int i=0; i<N; i++) cin >> L[i] >> R[i] >> H[i];

    for(int i=0; i<N; i++){
        for(int j=L[i]-1; j<=R[i]-1; j++){
            LIM[j] = min(LIM[j],H[i]);
        }
    }

    ll ans = 0;
    for(int i=0; i<D;i++){
        ans +=LIM[i];
        // cout << LIM[i] << endl;
    }
    cout << ans << endl;
    
}