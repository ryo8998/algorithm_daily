#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
#define mod 1000000007
constexpr array<int, 4> DY = {1, 0, -1, 0};
constexpr array<int, 4> DX = {0, 1, 0, -1};

int main(){
    int N,M;
    cin >> N >> M;
    vector<pair<ll,ll>> A;
    ll cnt = 0;
    ll ans = 0;
    // vector<pair<ll,ll>> B(M);

    for(int i=0; i<N; i++){
        ll a;
        cin >> a;
        A.push_back({a,1});
    }
    for(int i=0; i<M; i++){
        pair<ll,ll> bc;
        cin >> bc.second >> bc.first;
        A.push_back(bc);
    }
    sort(A.begin(), A.end());

    ll index = A.size()-1;
    // cout << A[index].first << endl;
    while(cnt < N){
        if(cnt + A[index].second <= N){
            ans += A[index].second * A[index].first;
            cnt += A[index].second;
        }else{
            // cout << (N - cnt) * A[index].first << endl; 
            ans += (N - cnt) * A[index].first;
            cnt += (N - cnt);
        }
        // cout << ans << endl;
        index--;
    }
    for(int i=0; i<A.size(); i++){
        // cout << A[i].first;
        // cout << " ";
        // cout << A[i].second;
        // cout << endl;
    }
    cout << ans << endl;
}