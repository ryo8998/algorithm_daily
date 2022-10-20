#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
#define mod 1000000007
constexpr array<int, 4> DY = {1, 0, -1, 0};
constexpr array<int, 4> DX = {0, 1, 0, -1};
int A[1501][1501]; 
int S[1501][1501];

int main(){
    int N;
    cin >> N;
    
    for(int i=0; i<N; i++){
        int x,y;
        cin >> x >> y;
        A[x][y] += 1;
    }
    int Q;
    cin >> Q;
    vector<vector<int>> B(Q,vector<int>(4));

    for(int i=0; i<Q; i++){
        cin >> B[i][0] >> B[i][1] >>B[i][2] >> B[i][3];
    }
    for(int i=1; i<1501; i++){
        for(int j=1; j<1501; j++){
            S[i][j] = S[i][j-1] + A[i][j];
        }
    }

    for(int i=1; i<1501; i++){
        for(int j=1; j<1501; j++){
            S[j][i] += S[j-1][i];
        }
    }


    // for(int i=0; i<10; i++){
    //   for(int j=0; j<10; j++){
    //       cout << A[i][j] << " ";
    //   }
    // cout << endl;
    // }

    for(int i=0;i<Q; i++){
        int a,b,c,d;
        a = B[i][0];
        b = B[i][1];
        c = B[i][2];
        d = B[i][3];

        cout << S[c][d] + S[a-1][b-1] - S[c][b-1] - S[a-1][d]   << endl;
    }
    
}