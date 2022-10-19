#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
#define mod 1000000007
constexpr array<int, 4> DY = {1, 0, -1, 0};
constexpr array<int, 4> DX = {0, 1, 0, -1};

int main(){
    int T,N;
    cin >> T >> N;
    vector<int> A(T+1);
    for(int i=0; i<N; i++){
        int L,R;
        cin >> L >> R;
        A[L] +=1;
        A[R] -=1;
    }
    int ans = 0;
    for(int i=0; i<T; i++){
        ans += A[i];
        cout << ans << endl;
        // cout << A[i] << endl;
    }
}