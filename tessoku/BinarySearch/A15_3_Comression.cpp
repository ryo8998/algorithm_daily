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
    vector<int> X(N);
    for(int i=0; i<N; i++){
      cin >> A[i];
      X[i] = A[i];  
    } 
    sort(X.begin(),X.end());
    X.erase(unique(X.begin(), X.end()), X.end());

    for(int i=0; i<N; i++){
       int idx =  lower_bound(X.begin(),X.end(),A[i]) - X.begin();
        cout << idx + 1 << " ";
    }
}