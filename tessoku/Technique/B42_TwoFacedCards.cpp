#include <bits/stdc++.h>
typedef long long ll;
using namespace std;    
#define mod 1000000007
constexpr array<int, 4> DY = {1, 0, -1, 0};
constexpr array<int, 4> DX = {0, 1, 0, -1};

int main(){
    ll N;
    cin >> N;
    vector<pair<ll,ll>> cards(N);
    for(int i=0; i<N; i++){
        ll a,b;
        cin >> a >> b;
        cards[i] = {a,b};
    }
    for(int i=0; i<)
}


/*

・もちろん全てのカードを取る、取らないはできない O(2^N)かかるため
・例えば、表だけならプラスかマイナスで絶対値の大きい方を選んでそれの総和が最大値
・そして裏だけでも同じことができるが、

2 8
4 -5
5 -3
-4 1
-2 -3


*/