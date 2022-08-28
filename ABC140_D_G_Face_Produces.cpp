#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
#define mod 1000000007
constexpr array<int, 4> DY = {1, 0, -1, 0};
constexpr array<int, 4> DX = {0, 1, 0, -1};

int main(){
    int N,K;
    string s;
    cin >> N >> K;
    cin >> s;
    int cnt = 0;
    for(int i=1; i<N; i++){
        if(s[i-1] == 'R' && s[i] =='R'){
            cnt++;
        }
         if(s[i-1] == 'L' && s[i] =='L'){
            cnt++;
        }
    }
    cout << min(cnt + 2 * K,N-1) << endl;
}