#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
#define mod 1000000007
constexpr array<int, 4> DY = {1, 0, -1, 0};
constexpr array<int, 4> DX = {0, 1, 0, -1};

int main(){
    int N,M;
    cin >> N >> M;
    vector<pair<int,int>> p(M);
    for(int i=0; i<M; i++){
        int s,c;
        cin >> s >> c;
        p[i] = {s,c};
    }
    for(int i=0; i<1000; i++){
         vector<int> b;
        if(i == 0){
            b = {0};
        }else{
            int x = i;
            while(x){
                b.push_back(x%10);
                x/=10;
            }
            reverse(b.begin(),b.end());
        }
        // for(int i=0; i<b.size(); i++){
        //     cout << b[i];
        // }
        if(b.size() != N) continue;
        bool flag = true;
        for(int i=0; i<M; i++){
            if(b[p[i].first-1] != p[i].second){
                flag = false;
            }
        }
        if(flag){
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;
}