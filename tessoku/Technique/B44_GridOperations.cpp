#include <bits/stdc++.h>
typedef long long ll;
using namespace std;    
#define mod 1000000007
constexpr array<int, 4> DY = {1, 0, -1, 0};
constexpr array<int, 4> DX = {0, 1, 0, -1};

int main(){
    ll N;
    cin >> N;
    vector<vector<ll>> A(N+1,vector<ll>(N+1));
    vector<ll> T(N+1,0);
    vector<vector<ll>> Query;
    for(int i=1; i<=N; i++) T[i] = i;
    for(int i=1; i<=N; i++){
        for(int j=1; j<=N; j++){
            cin >> A[i][j];
        }
    }
    ll Q;
    cin >> Q;
    for(int i=0; i<Q; i++){
        vector<ll> a;
        ll q,x,y;
        cin >> q >> x >> y;
        a.push_back(q);
        a.push_back(x);
        a.push_back(y);
        Query.push_back(a);
    }
    for(int i=0; i<Q; i++){
        if(Query[i][0] == 1){
            ll temp = T[Query[i][1]];
            T[Query[i][1]] = T[Query[i][2]];
            T[Query[i][2]] = temp;
        }else{
            // cout << "x " << T[Query[i][1]] << endl;
            cout << A[T[Query[i][1]]][Query[i][2]] << endl;
        }
    }
}