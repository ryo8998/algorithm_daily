#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
#define mod 1000000007
constexpr array<int, 4> DY = {1, 0, -1, 0};
constexpr array<int, 4> DX = {0, 1, 0, -1};

int main(){
    int N;
    cin >> N;
    ll ans = 0;
    map<pair<int,int>,int> m;
    for(int i=1; i<=N; i++){
        int num = i;
        int last = i%10;
        int first = 0;
        while(num){
            first = num;
            num/=10;
        }
     
        m[{first,last}]++;
    }
    for(int i=1; i<=N; i++){
        int num = i;
        int last = i%10;
        int first = 0;
        while(num){
            first = num;
            num/=10;
        }
        ans += m[{last,first}];
    }
    cout << ans << endl;
}