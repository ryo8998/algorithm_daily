#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
#define mod 1000000007
constexpr array<int, 4> DY = {1, 0, -1, 0};
constexpr array<int, 4> DX = {0, 1, 0, -1};

ll N,K;

ll check(ll x, vector<ll> &A){
    ll sum = 0;
    for(int i=0; i<N; i++){
        sum += x/A[i];
    }
    if(sum >= K) return  true;
    else return false;
}


int main(){

    cin >> N >> K;
    vector<ll> A(N);
    for(int i=0; i<N; i++) cin >> A[i];

    ll l = 0;
    ll r = 1000000000;
    while(l < r){
        ll mid = (l + r) / 2;
        if(check(mid,A)){
            r = mid;
        }else{
            l = mid + 1;
        }
    }
    cout << l << endl;

}