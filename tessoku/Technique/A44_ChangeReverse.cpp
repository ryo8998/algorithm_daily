#include <bits/stdc++.h>
typedef long long ll;
using namespace std;    
#define mod 1000000007
constexpr array<int, 4> DY = {1, 0, -1, 0};
constexpr array<int, 4> DX = {0, 1, 0, -1};

int main(){
    ll N,M;
    cin >> N >> M;
    vector<ll> A(N+1);
    for(int i=1; i<=N;i++) A[i] = i;
    bool reverse = false;
    for(int i=0;i<M; i++){
        int q;
        cin >> q;
        if(q == 2){
            reverse = reverse == false ? true: false;
        }else if(q == 1){
            ll x,y;
            cin >> x >> y;
            if(reverse){
                A[N-x+1] = y;
            }else{
                A[x] = y;
            }
        }else{
            ll x;
            cin >> x;
            if(reverse){
                cout << A[N-x+1] << endl;
            }else{
                cout << A[x] << endl;
            }
        }
    }
}