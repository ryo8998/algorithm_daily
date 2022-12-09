#include <bits/stdc++.h>
typedef long long ll;
using namespace std;    
#define mod 1000000007
constexpr array<int, 4> DY = {1, 0, -1, 0};
constexpr array<int, 4> DX = {0, 1, 0, -1};

int main(){
    int N,H,W;
    cin >> N >> H >> W;
    vector<int> A(N+1);
    vector<int> B(N+1);

    for(int i=1; i<=N; i++){
        cin >> A[i] >> B[i];
    } 

    int nimsum = 0;
    for(int i=1; i<=N; i++){
        nimsum ^=(A[i]-1);
    }
    for(int i=1; i<=N; i++){
        nimsum ^=(B[i]-1);
    }

    cout << (nimsum == 0? "Second":"First") << endl;

}