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
    vector<int> S(N+1);
    for(int i=0; i<N; i++) cin >> A[i];
    S[0] = 0;
    for(int i=1; i<=N; i++) S[i] = S[i-1] + A[i-1];
    int Q;
    cin >> Q;
    vector<int> L(Q);
    vector<int> R(Q);
    for(int i=0; i<Q; i++){
        cin >> L[i] >> R[i];
    }
    for(int i=0; i<Q; i++){
        if((S[R[i]] - S[L[i]-1])*2 > (R[i] - L[i] + 1)){
            cout << "win" << endl;
        }else if((S[R[i]] - S[L[i]-1])*2 == (R[i] - L[i] + 1) ){
            cout << "draw" << endl;
        }else{
            cout << "lose" << endl;
        }
    }


}