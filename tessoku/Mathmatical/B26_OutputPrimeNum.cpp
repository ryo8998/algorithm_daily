#include <bits/stdc++.h>
typedef long long ll;
using namespace std;    
#define mod 1000000007
constexpr array<int, 4> DY = {1, 0, -1, 0};
constexpr array<int, 4> DX = {0, 1, 0, -1};
vector<bool> table;

bool eratosthenesSieve(int n){
    table.resize(n+1);
    fill(table.begin(),table.end(),true);
    table[0] = false;
    table[1] = false;

    for(int i=2; i*i<=n; i++){
        if(table[i] == false) continue;
        for(int j=i*2; j<=n; j+=i){
                table[j] = false;
        }
    }
    return table[n];
}

int main(){
    int N;
    cin >> N;
    eratosthenesSieve(N); 
    for(int i=0; i<=N; i++){
        if(table[i]){
            cout << i << endl;
        }
    }
}