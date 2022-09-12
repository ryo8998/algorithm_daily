#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
#define mod 1000000007
constexpr array<int, 4> DY = {1, 0, -1, 0};
constexpr array<int, 4> DX = {0, 1, 0, -1};

int main(){
    int N,K;
    cin >> N >> K;
    vector<ll> E(N);
    for(int i=0; i<N; i++){
        int p;
        cin >> p;
        //double e = ((p * (p+1.0))/2.0)/p; 
        int e =  p + 1;
        E[i] = e;
    }
    ll max = 0;
    ll current = 0;
    for(int i=0; i<K; i++){
        max += E[i];
        current +=E[i];
    }
    for(int i=K; i<N; i++){
    current = current + E[i] - E[i - K]; 
    if(max < current) max = current;
    }
    double ans = max / 2.0;
    printf("%.10f\n", ans);
    
}