#include <bits/stdc++.h>
typedef long long ll;
using namespace std;    
#define mod 1000000007
constexpr array<int, 4> DY = {1, 0, -1, 0};
constexpr array<int, 4> DX = {0, 1, 0, -1};

int main(){
    int Q;
    cin >> Q;
    set<int> s;
    for(int i=0; i<Q; i++){
        int q,value;
        cin >> q >> value;
        if(q == 1){
            s.insert(value);
        }else if(q == 2){
            s.erase(value);
        }else {
            auto itr = s.lower_bound(value);
            if(itr == s.end()){
                cout << -1 << endl;
            }else{
                cout << (*itr) << endl;
            }
        }
    }
}