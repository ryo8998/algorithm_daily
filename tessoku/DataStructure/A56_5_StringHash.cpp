#include <bits/stdc++.h>
typedef long long ll;
using namespace std;    
#define mod 1000000007
constexpr array<int, 4> DY = {1, 0, -1, 0};
constexpr array<int, 4> DX = {0, 1, 0, -1};
vector<ll> base;
vector<ll> h;
vector<ll> T;



ll Hash_Value(ll l, ll r){
    ll val = h[r] - (base[r - l + 1] * h[l - 1]%mod);
    if(val < 0){
        // cout <<  val << endl;
         val+=mod;
        // cout << val << endl;
    }
    return val;
}

int main(){
    ll N,Q;
    cin >> N >> Q;
    base.resize(N+1);
    h.resize(N+1);
    T.resize(N+1);
    string S;
    cin >> S;
    for(int i=1; i<=N; i++) T[i] = (S[i-1] - 'a') + 1;
    const ll bai = 100;
    base[0] = 1;
    for(int i=1; i<=N; i++){
        base[i] = base[i-1] * bai % mod;
    }
    h[0] = 0;
    for(int i=1; i<=N; i++){
        h[i] = (bai * h[i-1] + T[i]) % mod;
    }
    for(int i=0; i<Q; i++){
        ll a,b,c,d;
        cin >> a >> b >> c >> d;
        ll hv1 = Hash_Value(a,b);
        ll hv2 = Hash_Value(c,d);
        // cout << hv1 << endl;
        // cout << hv2 << endl;

        if(hv1 == hv2){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }

    
    
}