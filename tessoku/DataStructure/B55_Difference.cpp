#include <bits/stdc++.h>
typedef long long ll;
using namespace std;    
#define mod 1000000007
constexpr array<int, 4> DY = {1, 0, -1, 0};
constexpr array<int, 4> DX = {0, 1, 0, -1};

int main(){
    int Q;
    cin >> Q;
    set<ll> s;
    for(int i=0; i<Q; i++){
        int q;
        ll x;
        cin >> q >> x;
        if(q == 1){
            s.insert(x);
        }else {
            if(s.empty()){
                cout << -1 << endl;
                continue;
            }
            auto itr = s.lower_bound(x);
            ll num1 = (*itr);
            if(*itr != (*s.begin())) itr--;       
            ll num2 = (*itr);
            ll ans = min(abs(x - num1),abs(x - num2));
            cout << (ans) << endl;
            
        }
    }
}