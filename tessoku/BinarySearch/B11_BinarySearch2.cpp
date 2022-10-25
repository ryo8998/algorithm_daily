#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
#define mod 1000000007
constexpr array<int, 4> DY = {1, 0, -1, 0};
constexpr array<int, 4> DX = {0, 1, 0, -1};

int main(){
    int N;
    cin >> N;
    vector<int> A(N);
    for(int i=0; i<N; i++) cin >> A[i];
    sort(A.begin(),A.end());
    int Q;
    cin >> Q;
    for(int i=0; i<Q; i++){
        int X;
        cin >> X;
        cout << lower_bound(A.begin(),A.end(),X) - A.begin() << endl;
    }
}