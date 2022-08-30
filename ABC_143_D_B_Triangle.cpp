#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    int N;
    ll cnt = 0;
    cin >> N;
    vector<int> A(N);
    for(int i=0; i<N; i++){
        cin >> A[i];
    }
    sort(A.begin(),A.end());
    for(int i=A.size()-1; i>=0; i--){
        for(int j=i-1;j>0; j--){
            ll x = A[i] - A[j] + 1;
            auto it = lower_bound(A.begin(),(A.begin()+ j),x);
            cnt += (A.begin()+j) - it;
        }
    }
    cout << cnt << endl;
}