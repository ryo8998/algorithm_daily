#include <bits/stdc++.h>
typedef long long ll;
using namespace std;    
#define mod 1000000007
constexpr array<int, 4> DY = {1, 0, -1, 0};
constexpr array<int, 4> DX = {0, 1, 0, -1};
ll cnt[109];


int main(){
    ll N;
    cin >> N;
    for(int i=0; i<N; i++){
        int a;
        cin >> a;
        cnt[a] +=1;
    }

    ll ans = 0;
    for(int i=1;i<=100; i++){
        // cout << i << " " << cnt[i] << endl;
        ans += cnt[i] * max(0ll,(cnt[i] -1))  * max(0ll,(cnt[i] -2))/ (3 * 2 * 1);
    }

    cout << ans << endl;
}