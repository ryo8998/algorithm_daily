#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
#define mod 1000000007
constexpr array<int, 4> DY = {1, 0, -1, 0};
constexpr array<int, 4> DX = {0, 1, 0, -1};

int main(){
    int H,W;
    cin >> H >> W;
    ll ans = 0;
    vector<string> grid(H);
    vector<vector<int>> row(H,vector<int>(W));
    vector<vector<int>> col(H,vector<int>(W));
    vector<vector<bool>> done(H,vector<bool>(W));

    for(int i=0; i<H; i++){
        cin >> grid[i];
    }
    for(int i=0; i<H; i++){
        for(int j=0; j<W; j++){
            if(grid[i][j] == '#' || done[i][j] == true) continue;
            int len = 0;
            int r;
            r = j;
            while(r < W && grid[i][r] == '.'){
                len++;
                r++;
            }
            for(int k = j; k<r; k++){
                row[i][k] = len;
                done[i][k] = true;
            }
        }
    }
    // for(int i=0; i<H; i++){
    //     for(int j=0; j<W; j++){
    //         cout << row[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    for(int i=0; i<H; i++){
        for(int j=0; j<W; j++){
            done[i][j] = false;
        }
    }
    for(int i=0; i<W; i++){
        for(int j=0; j<H; j++){
            if(grid[j][i] == '#' || done[j][i] == true) continue;
            int len = 0;
            int b;
            b = j;
            while(b < H && grid[b][i] == '.'){
                len++;
                b++;
                // cout << "b " << b << endl;
            }
            for(int k = j; k<b; k++){
                col[k][i] = len;
                done[k][i] = true;
            }
            // cout << "i " << i << endl;
            // cout << "j " << j << endl;

        }
    }
    // for(int i=0; i<H; i++){
    //     for(int j=0; j<W; j++){
    //         cout << col[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    for(int i=0; i<H; i++){
        for(int j=0; j<W; j++){
            if(ans < row[i][j] + col[i][j] - 1){
                ans = row[i][j] + col[i][j] - 1;
            }
        }
    }
    cout << ans << endl;
}