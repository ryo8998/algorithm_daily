#include <bits/stdc++.h>
typedef long long ll;
using namespace std;    
#define mod 1000000007
constexpr array<int, 4> DY = {1, 0, -1, 0};
constexpr array<int, 4> DX = {0, 1, 0, -1};

int grundy[1000009];

int main(){
    int N,X,Y;
    cin >> N >> X >>Y;
    vector<int> A(N+1);
    for(int i=1; i<=N; i++) cin >> A[i];

    for(int i=0; i<=100000; i++){
        bool transit[3] = {false,false,false};
        if(i >= X) transit[grundy[i-X]] = true;
        if(i >= Y) transit[grundy[i-Y]] = true;
        if(transit[0] == false) grundy[i] = 0;
        else if(transit[1] == false) grundy[i] = 1;
        else grundy[i] = 2;
    }

    int xor_sum = 0;
    for(int i=1; i<=N; i++){
        xor_sum ^= grundy[A[i]];
    }

    if(xor_sum !=0) cout << "First" << endl;
    else cout << "Second" << endl;


}