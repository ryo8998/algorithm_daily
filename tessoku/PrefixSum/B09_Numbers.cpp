#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
#define mod 1000000007
constexpr array<int, 4> DY = {1, 0, -1, 0};
constexpr array<int, 4> DX = {0, 1, 0, -1};
int A[1509][1509];
int S[1509][1509];


int main(){
    int N;
    cin >> N;
    for(int i=0; i<N; i++){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        S[a][b] +=1;
        S[a][d] -=1;
        S[c][b] -=1;
        S[c][d] +=1;
    }
    for(int i=0; i<=1500; i++){
        for(int j=0; j<=1500; j++){
            S[i][j] = 0;
        }
    }
    for(int i=1; i<=1500; i++){
        for(int j=1; j<=1500; j++){
            S[i][j] += S[i][j-1];
        }
    }

    for(int j=1; j<=1500; j++){
        for(int i=1; i<=1500; i++){
            S[i][j] += S[i-1][j];
        }
    }
    int sum = 0;
    for(int i=0; i<=1500; i++){
        for(int j=0; j<=1500; j++){
            // cout << A[i][j] << " ";
            if(S[i][j]>=1){
                sum+= 1;
            }
        }
    }

    cout << sum << endl;

}