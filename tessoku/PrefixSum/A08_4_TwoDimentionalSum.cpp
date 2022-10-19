#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
#define mod 1000000007
constexpr array<int, 4> DY = {1, 0, -1, 0};
constexpr array<int, 4> DX = {0, 1, 0, -1};

int main(){
    int H,W,Q;
    cin >> H >> W;
    vector<vector<int>> X(H,vector<int>(W,0));
    vector<vector<int>> S(H,vector<int>(W,0));
    

    for(int i=0; i<H; i++){
        for(int j=0; j<W; j++){
            cin >>X[i][j];
        }
    }
    cin >> Q;
    vector<vector<int>> q(Q,vector<int>(4));
    for(int i=0; i<Q;i++){
        for(int j=0; j<4; j++){
            cin >> q[i][j];
        }
    }
    for(int i=0; i<H; i++){
        for(int j=0; j<W; j++){
            if(j == 0){
                S[i][j] = X[i][j];
            }else{
                S[i][j] = S[i][j-1] + X[i][j];
            }
            // cout << S[i][j] << endl;
        }
    }
    for(int i=0; i<W; i++){
        for(int j=0; j<H; j++){
            if(j == 0){
                continue;
            }else{
                S[j][i] = S[j-1][i] + S[j][i];
            }
            // cout << S[j][i] << endl;
        }
    }
    for(int i=0; i<Q; i++){
        int a,b,c,d;
        int sum = 0;
        a = q[i][0];
        b = q[i][1];
        c = q[i][2];
        d = q[i][3];
        a--;b--;c--;d--;
        sum += S[c][d];
        if(a - 1 >= 0 && b - 1 >= 0){
            sum +=S[a-1][b-1];
        }
        if(a - 1 >= 0){
            sum-= S[a-1][d];
        }
        if(b - 1 >= 0){
            sum -= S[c][b-1];
        }
        cout << sum << endl;

    }
}