#include <bits/stdc++.h>
using namespace std;

typedef long long ll;


int main(){
    int N;
    cin >> N;
    vector<int> map(N+1,0);
    vector<int> b(N,0);
    for(int i=0; i<N; i++){
        ll a;
        cin >> a;
        map[a]++;
        b[i] = a;
    }
    ll sum = 0;
    for(int i=1; i<N+1; i++){
        ll n;
        n = map[i];
        if(n <= 1) continue;
        sum += (n * (n-1))/2;
        //cout << sum << endl;
    }
  	//cout << sum << endl;
    for(int i=0; i<N; i++){
        ll c,n,m,diff;
        n = b[i];
        m = map[n];
        c = (m * (m-1))/2;
      	diff  = c - ((c * (m-2)) /m);
        //cout << diff << endl;
        cout << sum - diff << endl;
    }
    
}