#include <bits/stdc++.h>
typedef unsigned long long ll;
using namespace std;    
#define mod 1000000007
constexpr array<int, 4> DY = {1, 0, -1, 0};
constexpr array<int, 4> DX = {0, 1, 0, -1};

int main(){
    ll a,b;
    cin >> a >> b;
    ll num = 1;
    while(b){
        if((b&1) == 1){
            num *=a;
            num %= mod;
        }
        a*=a;
        a%=mod;
        b>>=1;
    }
    cout << num << endl;
}