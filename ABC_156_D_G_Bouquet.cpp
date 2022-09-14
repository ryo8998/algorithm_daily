#include <bits/stdc++.h>
#include <atcoder/modint>
#include <iostream>

using namespace std;
using namespace atcoder;
using mint = modint1000000007;
typedef long long ll;
// using namespace std;
#define mod 1000000007
constexpr array<int, 4> DY = {1, 0, -1, 0};
constexpr array<int, 4> DX = {0, 1, 0, -1};


mint fact(ll n, ll a){
    mint sum = 1;
    for(int i=0; i<a; i++){
        sum *=n;
        n--;
    }
    return sum;
}

mint fact(ll a){
    mint sum = 1;
    for(int i=1; i<=a; i++){
        sum *= i;
    }
    return sum;
}


mint nCr(ll n,ll r){
    return fact(n,r) / fact(r);
}



int main(){
    ll n,a,b;
    cin >> n >> a >> b;
    mint x  = 2;
    mint ans = 0;
    cin >> n >> a >> b;
    ans = x.pow(n) - 1 - nCr(n,a) - nCr(n,b);
    // cout << x.pow(n) << endl;
    cout << ans.val() << endl;
}

