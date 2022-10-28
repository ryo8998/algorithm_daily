#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
#define mod 1000000007
constexpr array<int, 4> DY = {1, 0, -1, 0};
constexpr array<int, 4> DX = {0, 1, 0, -1};

int main(){
    int N,K;
    cin >> N >> K;
    vector<int> A(N);
    vector<int> S(N+1);
    for(int i=0; i<N; i++) cin >> A[i];
    ll ans = 0;
    ll current_sum  = 0;
    int l = 0, r = 0;
    for(int l=0; l<N; l++){

        while(r < N && current_sum + A[r] <= K){
            current_sum += A[r];
            r++;
        }

        ans += r - l;

        if(l == r) r++;
        else current_sum -=A[l];
    }
    cout << ans << endl;
}