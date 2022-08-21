#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
#define mod 1000000007
constexpr array<int, 4> DY = {1, 0, -1, 0};
constexpr array<int, 4> DX = {0, 1, 0, -1};

int main(){
    ll N,K;
    cin >> N >> K;
    vector<ll> A(N);
    // vector<ll> B(N+1,0);
    for(int i=0; i<N; i++) cin >> A[i];
    // for(int i=1; i<N+1; i++){
    //     B[i] = B[i-1] + A[i-1];
    // }
    // for(int i=0; i<B.size(); i++) cout << B[i] << endl;
    ll l = 0,r = 0;
    ll sum = 0;
    ll cnt = 0;
    for(l=0; l<N; l++){
        while(r < N && sum + A[r] < K){
            sum += A[r];
            r++;
        }
        cnt += r - l;
        sum -= A[l];
    }
    cnt = (ll)N *(N+1) / 2 - cnt;
    cout << cnt << endl;
}