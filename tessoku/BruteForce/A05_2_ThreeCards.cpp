#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
#define mod 1000000007
constexpr array<int, 4> DY = {1, 0, -1, 0};
constexpr array<int, 4> DX = {0, 1, 0, -1};

int main(){
    int N,K;
    cin >> N >> K;
    int cnt = 0;
    for(int i=1; i<=N; i++){
        for(int j=1; j<=N; j++){
            int remainder = K - i - j;
            if(1 <= remainder && remainder <=N){
                cnt++;
            }
        }
    }
    cout << cnt << endl;
}