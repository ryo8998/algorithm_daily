#include <bits/stdc++.h>
typedef long long ll;
using namespace std;    
#define mod 1000000007
constexpr array<int, 4> DY = {1, 0, -1, 0};
constexpr array<int, 4> DX = {0, 1, 0, -1};

int main(){
    int N,K;
    cin >> N >> K;
    vector<pair<int,int>> A(N);
    for(int i=0; i<N; i++){
        int a,b;
        cin >> a >> b;
        A[i] = {a,b};
    }

    ll ans = 0;
    ll player = 0;
    for(int i=1; i<=100;i++){
        for(int j=1; j<=100; j++){
            player = 0;
            for(int k=0; k<N; k++){
                if(i <= A[k].first && i+K >= A[k].first && j <= A[k].second && j + K >= A[k].second){
                    player++;
                }
            }
            ans = max(ans, player);
        }
    }
    cout << ans << endl;
}