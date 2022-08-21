#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
#define mod 1000000007
constexpr array<int, 4> DY = {1, 0, -1, 0};
constexpr array<int, 4> DX = {0, 1, 0, -1};

int main(){
    int N,M;
    cin >> N >> M;
    vector<ll> A(N);
    ll P = 0;
    ll ans = 0;
    for(int i=0; i<M; i++){
        int k;
        cin >> k;
        for(int j=0; j<k;j++){
            int s;
            cin >> s;
            s--;
            A[s] |= (1 << i);
        }
    }
    for(int i=0; i<M; i++){
        int x;
        cin >> x;
        P |= (x << i);
    }
    for(int i=0; i<(1<<N);i++){
        int t = 0;
        for(int j=0; j<N; j++){
            if((i >> j) & 1){
                t ^= A[j];
            }
        }
        if( t == P){
            ans++;
        }
    }
    cout << ans << endl;

}