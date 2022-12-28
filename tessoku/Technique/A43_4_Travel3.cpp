#include <bits/stdc++.h>
typedef long long ll;
using namespace std;    
#define mod 1000000007
constexpr array<int, 4> DY = {1, 0, -1, 0};
constexpr array<int, 4> DX = {0, 1, 0, -1};

int main(){
    ll N,L;
    cin >> N >> L;
    ll ans = 0;
    for(int i=0; i<N; i++){
        ll a;
        char b;
        cin >> a >> b;
        if(b == 'E'){
            ans = max(ans,L-a);
        }else{
            ans = max(ans,a);
        }

    }
    cout << ans << endl;
}