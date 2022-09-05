#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
#define mod 1000000007
constexpr array<int, 4> DY = {1, 0, -1, 0};
constexpr array<int, 4> DX = {0, 1, 0, -1};

vector<char> A;

int main(){
    int N,K;
    ll cnt = 0;
    cin >> N >> K;
    int R,S,P;
    cin >> R >> S >> P;
    string t;
    cin >> t;
    char command = 0;
    int point = 0;
    A.resize(N);
    for(int i=0; i<t.length(); i++){
        if(t[i] == 'r'){
            command = 'p';
            point = P;
        }else if(t[i] == 's'){
            command = 'r';
            point = R;
        }else if(t[i] == 'p'){
            command = 's';
            point = S;
        }

        if(i - K >= 0 && A[i-K] == command){
            command = '0';
            point = 0;
        }
        cnt += point;
        A[i] = command;
    }
    cout << cnt << endl;
}