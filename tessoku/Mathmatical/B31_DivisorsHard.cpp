#include <bits/stdc++.h>
typedef long long ll;
using namespace std;    
#define mod 1000000007
constexpr array<int, 4> DY = {1, 0, -1, 0};
constexpr array<int, 4> DX = {0, 1, 0, -1};


int main(){
    ll N;
    cin >> N;
    ll a1 = N/3;
    ll a2 = N/5;
    ll a3 = N/7;
    ll b1 = N/(3*5);
    ll b2 = N/(5*7);
    ll b3 = N/(3*7);
    ll c1 = N/(3*5*7);

    cout << a1 + a2 + a3 - b1 - b2 - b3 + c1 << endl;
}