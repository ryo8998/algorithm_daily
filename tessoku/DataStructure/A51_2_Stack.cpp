#include <bits/stdc++.h>
typedef long long ll;
using namespace std;    
#define mod 1000000007
constexpr array<int, 4> DY = {1, 0, -1, 0};
constexpr array<int, 4> DX = {0, 1, 0, -1};

int main(){
    ll Q;
    cin >> Q;
    stack<string> S;
    for(int i=0; i<Q; i++){
        ll q;
        cin >> q;
        if(q == 1){
            string s;
            cin >> s;
            S.push(s);
        }else if(q == 2){
            cout << S.top() << endl;
        }else{
            S.pop();
        }
    }
}