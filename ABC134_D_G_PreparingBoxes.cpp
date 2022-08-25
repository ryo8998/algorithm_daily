#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
#define mod 1000000007
constexpr array<int, 4> DY = {1, 0, -1, 0};
constexpr array<int, 4> DX = {0, 1, 0, -1};

int main(){
    int N;
    cin >> N;
    vector<ll> a(N+1);
    vector<ll> b(N+1);
    for(int i=1; i<=N; i++){
        cin >> a[i];
    }
    for(int j=N; j>=1; j--){
        int sum = 0;
        for(int k = j+j; k<=N; k+=j){
            sum ^= b[k];
        }
        b[j] = sum^a[j];
    }
    vector<int> ans;
    for(int i=1; i<=N; i++){
        if(b[i]) ans.push_back(i);
    }
    cout << ans.size() << endl;
    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << endl;
    }
}