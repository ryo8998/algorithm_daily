#include <bits/stdc++.h>
typedef unsigned long long ll;
using namespace std;    
#define mod 1000000007
constexpr array<int, 4> DY = {1, 0, -1, 0};
constexpr array<int, 4> DX = {0, 1, 0, -1};

ll GCD(ll a, ll b){
    if(b == 0) return a;
    return GCD(b, a%b);
}



int main(){
    ll A,B;
    cin >> A >> B;
    cout << A*B / GCD(A,B) << endl;
}