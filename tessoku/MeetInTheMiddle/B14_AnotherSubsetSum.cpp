#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
#define mod 1000000007
constexpr array<int, 4> DY = {1, 0, -1, 0};
constexpr array<int, 4> DX = {0, 1, 0, -1};

int main(){
    ll N,K;
    cin >> N >> K;
    vector<ll> A(N/2);
    vector<ll> B(N/2);
    vector<ll> C;
    vector<ll> D;
    for(ll i=0; i<N; i++){
        if(i < N/2){
            cin >> A[i];
        }else{
            cin >> B[i-N/2];
        }
    }
    for(ll i=0; i<(1<< A.size()); i++){
        ll sum = 0;
        for(int j=0; j<A.size(); j++){
            if(i & (1<< j)){
                sum += A[j]; 
            }
        }
        C.push_back(sum);
    }
    for(ll i=0; i<(1<< B.size()); i++){
        ll sum = 0;
        for(int j=0; j<B.size(); j++){
            if(i & (1<< j)){
                sum += B[j]; 
            }
        }
        D.push_back(sum);
    }

    sort(D.begin(),D.end());

    for(ll i=0; i<C.size(); i++){
        ll num = lower_bound(D.begin(),D.end(),K-C[i]) - D.begin();
        if(num < D.size() && D[num] == K - C[i]){
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
    return 0;

}