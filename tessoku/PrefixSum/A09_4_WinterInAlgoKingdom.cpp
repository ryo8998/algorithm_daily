#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
#define mod 1000000007
constexpr array<int, 4> DY = {1, 0, -1, 0};
constexpr array<int, 4> DX = {0, 1, 0, -1};

int main(){
    int H,W,N;
    cin >> H >> W >> N;
    vector<vector<int>> grid(1509,vector<int>(1509,0));
    vector<vector<int>> sum(1509,vector<int>(1509,0));

    for(int i=1; i<=N; i++){
        int a,b,c,d;
        cin >> a >> b >> c >>d;
        grid[a][b] +=1;
        grid[a][d+1] -= 1;
        grid[c+1][b] -=1;
        grid[c+1][d+1] +=1;
    }
    for(int i=1; i<=H; i++){
        for(int j=1; j<=W; j++){
            sum[i][j] = sum[i][j-1] + grid[i][j];
        }
    }
    for(int j=1; j<=W; j++){
        for(int i=1; i<=H; i++){
            sum[i][j] += sum[i-1][j];
        }
    }

    for(int i= 1; i<=H;i++){
        for(int j=1; j<=W; j++){
            cout << sum[i][j] << " ";
      }
      cout << endl;
    }
}