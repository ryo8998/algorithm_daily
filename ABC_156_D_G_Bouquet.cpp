#include <bits/stdc++.h>
#include <atcoder/modint>
#include <iostream>

using namespace std;
using namespace atcoder;
using mint = modint1000000007
typedef long long ll;
// using namespace std;
#define mod 1000000007
constexpr array<int, 4> DY = {1, 0, -1, 0};
constexpr array<int, 4> DX = {0, 1, 0, -1};
long long catche = 586445753;

mint nCr(mint n,mint r){
    return fact(n) / fact(r) * fact(n-r);
}

mint fact(mint n){
    mint sum = 1;
    if(n < 10e8){
        for(ll i=1; i<=n; i++){
        sum *= i;
        }
        return sum;
    }else{
        for(long long i=900000001;i<=n;i++){
        ans *= i;
        }
        return ans;
    }
    return sum;
}


int main(){
    mint n,a,b;
    cin >> n >> a >> b;
    mint x  = 2;
    mint ans = 0;
    cin >> n >> a >> b;
    ans = x.pow(n) - 1 - nCr(n,a) - nCr(n,b);
    cout << x.pow(n) << endl;
    cout << ans.val() << endl;
}
