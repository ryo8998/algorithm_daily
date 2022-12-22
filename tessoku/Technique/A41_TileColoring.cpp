#include <bits/stdc++.h>
typedef long long ll;
using namespace std;    
#define mod 1000000007
constexpr array<int, 4> DY = {1, 0, -1, 0};
constexpr array<int, 4> DX = {0, 1, 0, -1};

int main(){
    ll N;
    string S;
    cin >> N >> S;
    int blue_count = 0;
    int red_count = 0;
    for(int i=0; i<S.length(); i++){
        if(S[i] == 'R'){
            red_count++;
            blue_count = 0;
            if(red_count >= 3){
                cout << "Yes" << endl;
                return 0;
            }
        }else{
            blue_count++;
            red_count = 0;
            if(blue_count >= 3){
                cout << "Yes" << endl;
                return 0;
            }
        }
    }

    cout << "No" << endl;
    return 0;
}


/*
後ろから考える

・最後の一手を考えると最後の3つは必ず同じになる
→3個の並びがない時点でNoになる

・逆に3個並んだブロックがあれば、それを最後の処理にして他は事前に与えられた色に塗ることができる
→3つ色が並んだブロックがあるかどうかを判定すればOK



*/