#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
#define mod 1000000007
constexpr array<int, 4> DY = {1, 0, -1, 0};
constexpr array<int, 4> DX = {0, 1, 0, -1};

ll N,K;
ll A[100009],R[100009];

int main(){
    cin >> N >> K;
    for(int i=1; i<=N; i++) cin >> A[i];

    for(int i=1; i <= N-1; i++){
        //スタート地点を決める
        if( i == 1) R[i] = 1;
        else R[i] = R[i - 1];

        //ぎりぎりまで増やしていく
        while( R[i] < N && A[R[i]+1] - A[i] <= K){
            R[i] += 1;
        }
    }

    //出力　
    ll ans = 0;
    for(int i=1; i<=N-1; i++){
        ans += (R[i] - i);
    }
    cout << ans << endl;

}