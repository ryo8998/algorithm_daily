#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
#define mod 1000000007
constexpr array<int, 4> DY = {1, 0, -1, 0};
constexpr array<int, 4> DX = {0, 1, 0, -1};
int A[100009], LMAX[100009], RMAX[100009];


int main(){
    int N;
    cin >> N;
    for(int i=1; i<=N; i++) cin >> A[i];
    LMAX[1] = A[1];
    for(int i=2; i<=N; i++){
        LMAX[i] = max(LMAX[i-1],A[i]); 
    }
    RMAX[N] = A[N];
    for(int i=N-1; i>=1; i--){
        RMAX[i] = max(RMAX[i+1],A[i]); 
    }
    // reverse(RMAX.begin(),RMAX.end());
    int D;
    cin >> D;
    for(int i=0;i<D; i++){
        int l,r;
        cin >> l >> r;
        cout << max(LMAX[l-1],RMAX[r+1]) << endl;
    }

}