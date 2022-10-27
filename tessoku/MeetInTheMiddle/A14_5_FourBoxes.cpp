#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
#define mod 1000000007
constexpr array<int, 4> DY = {1, 0, -1, 0};
constexpr array<int, 4> DX = {0, 1, 0, -1};

int main(){
    int N,K;
    cin >> N >> K;
    vector<int> A(N);
    vector<int> B(N);
    vector<int> C(N);
    vector<int> D(N);
    for(int i=0; i<N; i++) cin >> A[i];
    for(int i=0; i<N; i++) cin >> B[i];
    for(int i=0; i<N; i++) cin >> C[i];
    for(int i=0; i<N; i++) cin >> D[i];
    vector<int> Q(N*N);
    vector<int> R(N*N);

    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            Q[i*N+j] = A[i] + B[j];
        }
    }

    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            R[i*N+j] = C[i] + D[j];
        }
    }

    sort(R.begin(),R.end());

    for(int i=0; i<Q.size(); i++){
        int pos = lower_bound(R.begin(),R.end(),K-Q[i]) - R.begin();
        // cout << R[i] << endl;
        if(pos <= N*N-1 && R[pos] == K - Q[i]){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}