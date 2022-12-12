#include <bits/stdc++.h>
typedef long long ll;
using namespace std;    
#define mod 1000000007
constexpr array<int, 4> DY = {1, 0, -1, 0};
constexpr array<int, 4> DX = {0, 1, 0, -1};

int main(){
    int N,K;
    cin >> N >> K;
    string S;
    cin >> S;
    int parity = 0;
    for(int i=0; i<N; i++){
        parity ^= (S[i] - 0x30);
    }
    if(parity == K%2){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}