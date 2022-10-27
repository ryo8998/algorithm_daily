#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
#define mod 1000000007
constexpr array<int, 4> DY = {1, 0, -1, 0};
constexpr array<int, 4> DX = {0, 1, 0, -1};

int main(){

    int N,K;
    cin >> N >> K;
    vector<int> A(N);
    for(int i=0; i<N; i++) cin >> A[i];
    int l = 0, r = 0;
    ll ans = 0;

    while(l < N){
        if(r == N || A[r] - A[l] > K){

            l++;
        }else {
            ans++;
            r++;
        }


    }
}