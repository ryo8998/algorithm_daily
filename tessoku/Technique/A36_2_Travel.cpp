#include <bits/stdc++.h>
typedef long long ll;
using namespace std;    
#define mod 1000000007
constexpr array<int, 4> DY = {1, 0, -1, 0};
constexpr array<int, 4> DX = {0, 1, 0, -1};

int main(){
    int N,K;
    cin >> N >> K;
    if(K >= (2*N-2) && K % 2 == 0){
        cout << "Yes" << endl;
    }else {
        cout << "No" << endl;
    }
}