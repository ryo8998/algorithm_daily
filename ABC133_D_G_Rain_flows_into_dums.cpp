#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ll N;
    cin >> N;
    vector<ll> A(N);
    for(int i=0; i<N; i++){
        cin >> A[i];
    }
    ll x = 0;
    for(int i=1; i<=N; i++){
        if(i % 2 == 0){
            x -= A[i-1];
        }else{
            x += A[i-1];
        }
    }
    //cout << "X " << x << endl;
    ll current = x;
    for(int j=1; j<=N; j++){
        cout << current << endl;
        current = A[j-1] * 2 - current;
    }
}
