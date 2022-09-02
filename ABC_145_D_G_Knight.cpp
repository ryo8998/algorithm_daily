#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
#define mod 1000000007
constexpr array<int, 4> DY = {1, 0, -1, 0};
constexpr array<int, 4> DX = {0, 1, 0, -1};

long long modpow(long long a, long long b) {
	long long p = 1, q = a;
	for (int i = 0; i < 30; i++) {
		if ((b & (1LL << i)) != 0) { p *= q; p %= mod; }
		q *= q; q %= mod;
	}
	return p;
}

long long Div(long long a, long long b) {
	// Get the value of a/b
	return (a * modpow(b, mod - 2)) % mod;
}

ll factorial(ll num){
    ll ans = 1;
    for(int i=1; i<=num; i++){
        ans *= i;
        ans %= mod;
    }
    return ans;
}

ll comb(ll n, ll r){
    return Div(factorial(n) , (factorial(r)%mod * factorial(n-r)%mod));
}


int main(){
    ll X,Y;
    cin >> X >> Y;
    if((X+Y)%3 !=0){
        cout << 0 << endl;
        return 0;
    }
    ll N = (X+Y)/3;
    X -= N;
    Y -= N;
    if(X < 0 || Y < 0){
        cout << 0 << endl;
        return 0;
    }
    cout << comb(X+Y,X) << endl;
    
}