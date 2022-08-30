#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
#define mod 1000000007
constexpr array<int, 4> DY = {1, 0, -1, 0};
constexpr array<int, 4> DX = {0, 1, 0, -1};

int main(){
    int N,M;
    cin >> N >> M;

    ll cnt = 0;
    vector<ll> A(N);
    priority_queue <ll> pq;
    for(int i=0; i<N; i++){
        ll a; 
        cin >> a;
        pq.push(a);
    }
    for(int i=0; i<M; i++){
        ll t = pq.top();
        pq.pop();
        pq.push(t>>1);
    }
    for(int i=0; i<N; i++){
        cnt += pq.top();
        pq.pop();
    }
    cout << cnt << endl;

}