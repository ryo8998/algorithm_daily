#include <bits/stdc++.h>
typedef long long ll;
using namespace std;    
#define mod 1000000007
constexpr array<int, 4> DY = {1, 0, -1, 0};
constexpr array<int, 4> DX = {0, 1, 0, -1};


int main(){
    ll N; 
    cin >> N;
    ll num = 0;
    for(int i=0; i<N; i++){
        char t;
        ll a;
        cin >> t >> a;
        if(t == '+'){
            num+=a;
            num%=10000;
            cout << num % 10000 << endl;
        }else if(t == '-'){
            num-=a;
            if(num < 0) num+=10000;
            num%=10000;
            cout << num % 10000 << endl;
        }else{
            num*=a;
            num%=10000;
            cout << num % 10000 << endl;
        }
    }

}