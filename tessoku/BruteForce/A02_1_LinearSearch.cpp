#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
#define mod 1000000007
constexpr array<int, 4> DY = {1, 0, -1, 0};
constexpr array<int, 4> DX = {0, 1, 0, -1};

int main(){
    int N,X;
    cin >> N >> X;
    vector<int> A(N);
    for(int i=0; i<N; i++) cin >> A[i];
    for(int i=0; i<N; i++){
        if(A[i] == X){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}