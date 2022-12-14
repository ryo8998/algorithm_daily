#include <bits/stdc++.h>
typedef long long ll;
using namespace std;    
#define mod 1000000007
constexpr array<int, 4> DY = {1, 0, -1, 0};
constexpr array<int, 4> DX = {0, 1, 0, -1};

ll R[18][10];
ll Power10[18];

int main(){
    ll N;
    cin >> N;
    Power10[0] = 1;
    for (int i=1; i<=16; i++ ) Power10[i] = 10LL * Power10[i-1];

    for(int i=0; i<=14; i++){
        ll digit = (N / Power10[i]) % 10LL;

        for(int j=0; j<10; j++){
            if(j < digit){
                R[i][j] = (N/Power10[i+1] * Power10[i] + Power10[i]);
            }
            if(j == digit){
                R[i][j] = (N/Power10[i+1]) * Power10[i] + (N%Power10[i]) + 1LL;
            }
            if(j > digit){
                R[i][j] = (N/Power10[i+1]) * Power10[i];
            }
        }
    }

    ll answer = 0;
    for(int i=0; i<=15; i++){
        for(int j=0; j<10; j++){
            answer += 1LL * j * R[i][j];
        }
    }

    cout << answer << endl;
    
}