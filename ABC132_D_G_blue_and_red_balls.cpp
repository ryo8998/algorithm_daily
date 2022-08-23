#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using namespace atcoder;

using mint = modint1000000007;

typedef long long ll;

#define mod 1000000007

mint comb[4005][4005] = {0};

void init(){
    comb[0][0] = 1;
    for(int i=0; i<4000; i++){
        for(int j=0; j<=i; j++){
            comb[i+1][j] += comb[i][j]; //配るDP
            comb[i+1][j+1] += comb[i][j]; //配るDP
        }
    }
}

mint nCr(int n, int r){
  return comb[n][r]; 
}

int main(){
    int N,K;
    cin >> N >> K;
    init();
    for(int i=1; i<=K; i++){
      mint a = comb[K-1][i-1];
      mint b = comb[N-K+1][i];
      mint ans = a * b; 
      cout << ans.val() << endl;
    }
    
}