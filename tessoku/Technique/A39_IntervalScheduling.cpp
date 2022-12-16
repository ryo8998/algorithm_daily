#include <bits/stdc++.h>
typedef long long ll;
using namespace std;    
#define mod 1000000007
constexpr array<int, 4> DY = {1, 0, -1, 0};
constexpr array<int, 4> DX = {0, 1, 0, -1};

int main(){
    int N;
    cin >> N;
    vector<pair<int,int>> A(N);
    for(int i=0; i<N; i++){
        int l,r;
        cin >> l >> r;
        A[i] = {r,l};
    }
    sort(A.begin(), A.end());

    ll ans = 1;
    ll now = A[0].first;
    for(int i=1; i<N;i++){
        if(A[i].second >= now){
            now = A[i].first;
            ans++;
        }
    }

    cout << ans << endl;

}