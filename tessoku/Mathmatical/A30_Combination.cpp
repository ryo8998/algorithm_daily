#include <bits/stdc++.h>
typedef long long ll;
using namespace std;    
#define mod 1000000007
constexpr array<int, 4> DY = {1, 0, -1, 0};
constexpr array<int, 4> DX = {0, 1, 0, -1};

ll fact(ll n){
    ll num = 1;
    for(int i=1; i<=n;i++){
        num *=i;
        num %=mod;
    }
    return num;
}

ll fast_pow(ll a, ll b){
    ll num = 1;
    while(b){
        if((b&1) == 1){
            num *=a;
            num %= mod;
        }
        a*=a;
        a%=mod;
        b>>=1;
    }
    return num%mod;
}

ll modInverse(ll n){
   return fast_pow(n,mod-2);
}



ll  nCr(ll n, ll r){

    ll a = fact(n);
    ll b = fact(r) * fact(n-r) % mod;
    return a * modInverse(b) % mod;
}

int main(){
    ll n,r;
    cin >> n >> r;
    cout <<  nCr(n,r) << endl;
}