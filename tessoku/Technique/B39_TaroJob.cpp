#include <bits/stdc++.h>
typedef long long ll;
using namespace std;    
#define mod 1000000007
constexpr array<int, 4> DY = {1, 0, -1, 0};
constexpr array<int, 4> DX = {0, 1, 0, -1};

int main(){
    ll N,D;
    cin >> N >> D;
    vector< pair<ll,ll>> A(N);
    vector<bool> Done(N,false);

    for(int i=0; i<N; i++){
        ll x,y;
        cin >> x >> y;
        A[i] = {y,x};
    }
    sort(A.begin(),A.end());
    ll ans = 0;
    for(int i=1; i<=D; i++){
        ll max_idx = -1;
        ll max_num = 0;
        for(int j=0; j<N; j++){
            if(A[j].second <= i && max_num < A[j].first && Done[j] == false){
                max_num = A[j].first;
                max_idx = j;
            }
        }
        if(max_idx != -1){
            ans += max_num;
            Done[max_idx] = true;
        }
    }
    cout << ans << endl;


}

/*

4,2
4,3
3,2
2,4
1,1

・N*Dなら計算量上いけるはず->これがいけない
・その仕事を完了させたかのフラグがいるか

*/