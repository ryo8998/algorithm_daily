#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
#define mod 1000000007
constexpr array<int, 4> DY = {1, 0, -1, 0};
constexpr array<int, 4> DX = {0, 1, 0, -1};

ll gcd(ll a, ll b){
    if(b==0) return a;
    return gcd(b,a%b);
}

vector<pair<ll,int>> factorize(ll n){
    vector<pair<ll,int>> res;
    for(ll i = 2; i * i <= n; i++){
        if(n % i) continue;//割り切れない
        res.emplace_back(i,0);
        while(n%i == 0){
            n/=i;
            res.back().second++;
        }
    }
    if(n != 1) res.emplace_back(n,1);
    return res;
}

int main(){
    ll A,B;
    cin >> A >> B;
    ll g = gcd(A,B);
    vector<pair<ll,int>> f = factorize(g);
    int ans = f.size() + 1;
    cout << ans << endl;
    
}