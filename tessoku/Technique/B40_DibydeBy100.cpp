#include <bits/stdc++.h>
typedef long long ll;
using namespace std;    
#define mod 1000000007
constexpr array<int, 4> DY = {1, 0, -1, 0};
constexpr array<int, 4> DX = {0, 1, 0, -1};
ll cnt[100];

int main(){
    ll N;
    cin >> N;
    vector<ll> A(N);
    for(int i=0; i<N;i++) cin >> A[i];
    for(int i=0; i<N; i++){
        int p = A[i] % 100;
        cnt[p]++;
    }
    ll ans = 0;
    for(int i=0; i<=50; i++){
        if(i==0 || i == 50){
            ans += cnt[i] * (cnt[i]-1) / 2;
        }else{
            ans += cnt[i] * cnt[100-i];
        }
    }

    cout << ans << endl;


}