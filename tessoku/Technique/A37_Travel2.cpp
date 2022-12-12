#include <bits/stdc++.h>
typedef long long ll;
using namespace std;    
#define mod 1000000007
constexpr array<int, 4> DY = {1, 0, -1, 0};
constexpr array<int, 4> DX = {0, 1, 0, -1};

int main(){
    ll N,M,B;
    cin >> N >> M >> B;
    vector<ll> A(N);
    vector<ll> C(M);
    ll amount = 0;
    for(int i=0; i<N; i++) {
        cin >> A[i];
    }
    for(int i=0; i<M; i++) {
        cin >> C[i];
    }
    for(int i=0; i<N; i++) {
        amount += A[i] * M;
    }
    for(int i=0; i<M; i++) {
        amount += C[i] * N;
    }

    amount += B*M*N;

    cout << amount << endl;
}