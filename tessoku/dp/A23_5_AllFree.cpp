#include <bits/stdc++.h>
typedef long long ll;
using namespace std;    
#define mod 1000000007
constexpr array<int, 4> DY = {1, 0, -1, 0};
constexpr array<int, 4> DX = {0, 1, 0, -1};

int main(){
    ll N, M;
    cin >> N >> M;
    vector<vector<ll>> qoupon(M,vector<ll>(N,0));
    vector<vector<ll>> dp(M+1,vector<ll>(1<<N,INT_MAX));
    for(int i=0; i<M; i++){
        for(int j=0; j<N; j++){
            cin >> qoupon[i][j];
        }
    }
    dp[0][0] = 0;
    for(int i=0; i<M; i++){
        for(int j=0; j<(1<<N);j++ ){
            // vector<int>already_free(N);
            // for(int k=0; k<N; k++){
            //     if(j&(1<<k) == 0)already_free[k] = 0;
            //     else already_free[k] = 1;
            // }

            // int v = 0;
            // for(int k=0; k<N; k++){
            //     if(already_free[k] == 1 || A[i][k] == 1){
            //         v += (1 << k);
            //     }
            // }
            if(dp[i][j] == INT_MAX) continue;
            int v = 0;
            for(int k=0; k<N; k++){
                if((j&(1<<k)) == 1 || qoupon[i][k] == 1){
                    v += (1 << k);
                }
                // cout << v << endl;
            }

                        if(i==2 && j == 2){
                cout << v << endl;
                cout << dp[i][j] + 1 << endl;
                cout << dp[i+1][v] << endl;
            }

            dp[i+1][j] = min(dp[i][j], dp[i+1][j]);
            dp[i+1][v] = min(dp[i][j] + 1, dp[i+1][v]);



    //          for(int i=0; i<=M; i++){
    //       for(int j=0; j<(1<<N); j++){
    //           cout << dp[i][j] << " ";
    //       }
    //       cout << endl;
    //   }
        }

      
    }

      cout << dp[M][(1<<N)-1] << endl;
      for(int i=0; i<=M; i++){
          for(int j=0; j<(1<<N); j++){
              cout << dp[i][j] << " ";
          }
          cout << endl;
      }
}