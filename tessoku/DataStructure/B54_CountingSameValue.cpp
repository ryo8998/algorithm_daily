#include <bits/stdc++.h>
typedef long long ll;
using namespace std;    
#define mod 1000000007
constexpr array<int, 4> DY = {1, 0, -1, 0};
constexpr array<int, 4> DX = {0, 1, 0, -1};

int main(){
    ll N;
    ll ans = 0;
    cin >> N;
    unordered_map<ll,ll> m;
    for(int i=0; i<N; i++){
        ll a;
        cin >> a;
        if(m[a] == 0){
            m[a] = 1;
        }else{
            m[a]++;
        }
    }
    for(auto itr = m.begin(); itr != m.end(); itr++){
        ans += itr->second * (itr->second - 1) / 2;
    }
    cout << ans << endl;
}