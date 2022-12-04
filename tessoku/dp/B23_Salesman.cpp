#include <bits/stdc++.h>
typedef long long ll;
using namespace std;    
#define mod 1000000007
constexpr array<int, 4> DY = {1, 0, -1, 0};
constexpr array<int, 4> DX = {0, 1, 0, -1};

#define BitSet(arg, position) ((arg) |= (1LL << (position)))


vector<ll> X;
vector<ll> Y;
double distance(ll before, ll after){
    return sqrt(pow(X[before] - X[after], 2) +  pow(Y[before] - Y[after],2));
}

int main(){
    ll N;
    cin >> N;
    X.resize(N);
    Y.resize(N);

    vector<vector<double>> dp(1<<N,vector<double>(N,INT_MAX));
    for(int i=0; i<N; i++){
        cin >> X[i];
        cin >> Y[i];
    }
    dp[0][0] = 0;
    for(int i=0; i<(1<<N); i++){
        for(int j=0; j<N; j++){

            for(int k=0; k<N; k++){
                if((i & (1<<k)) != 0) continue;
                double dist = distance(j,k); 
                dp[i + (1<<k)][k] = min(dp[i + (1<<k)][k], dp[i][j] + dist);
            }
        }
    }
    printf("%.12lf", dp[(1<<N)-1][0]);
}