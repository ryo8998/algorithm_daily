#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
#define mod 1000000007
constexpr array<int, 4> DY = {1, 0, -1, 0};
constexpr array<int, 4> DX = {0, 1, 0, -1};

int main(){
    ll N;
    cin >> N;
    if(N%2 == 1){
        cout << 0 << endl;
        return 0;
    }

    ll ans = 0;
    N /= 2;

    while(N){
        ans += N / 5;
        N /=5;
    }

    cout << ans << endl;
}