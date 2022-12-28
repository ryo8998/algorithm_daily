#include <bits/stdc++.h>
typedef long long ll;
using namespace std;    
#define mod 1000000007
constexpr array<int, 4> DY = {1, 0, -1, 0};
constexpr array<int, 4> DX = {0, 1, 0, -1};

int main(){
    ll N;
    char C;
    string S;
    cin >> N >> C >> S;
    ll score = 0;
    for(int i=0; i<S.length(); i++){
        if(S[i] == 'R') score +=2;
        if(S[i] == 'B') score +=1;
    }

    if(score % 3 == 0  && C == 'W'){
        cout << "Yes" << endl;
    }else if(score % 3 == 1 && C == 'B'){
        cout << "Yes" << endl;
    }else if(score % 3 == 2 && C == 'R'){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}