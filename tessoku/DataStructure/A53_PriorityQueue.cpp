#include <bits/stdc++.h>
typedef long long ll;
using namespace std;    
#define mod 1000000007
constexpr array<int, 4> DY = {1, 0, -1, 0};
constexpr array<int, 4> DX = {0, 1, 0, -1};

int main(){
    ll Q;
    cin >> Q;
    priority_queue<ll,vector<ll>,greater<ll>> PQ;
    for(int i=0; i<Q; i++){
        int q;
        cin >> q;
        if(q == 1){
            ll x;
            cin >> x;
            PQ.push(x);
        }else if(q == 2){
            cout << PQ.top() << endl;
        }else{
            PQ.pop();
        }
    }
}