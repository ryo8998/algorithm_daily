#include <bits/stdc++.h>
typedef long long ll;
using namespace std;    
#define mod 1000000007
constexpr array<int, 4> DY = {1, 0, -1, 0};
constexpr array<int, 4> DX = {0, 1, 0, -1};


int main(){
    ll X,Y;
    cin >> X >> Y;
    vector<pair<ll,ll>> ans;
    while(X > 1 || Y > 1){
        ans.push_back({X,Y});
        if(X > Y){
            X -=Y;
        }else{
            Y -=X;
        }
    }

    reverse(ans.begin(),ans.end());

    cout << ans.size() << endl;

    for(int i=0; i < ans.size(); i++){
        cout << ans[i].first << " " << ans[i].second << endl;
    }
}

/*

・ユークリッドの互助法の逆をやれば良い
・X>Yの間はYを引き続けて、Y>Xの場合はXを引き続けて、両方が1になるまで行う
・XとYの最大公約数は1つまり互いに素なので同じ数字になることはない


以下ぼつ
変数ｘの値をXに、変数yの値をYにする

最後の操作は
Xの場合
X　= x_new =  x_old + Y
X - Y = x_old

Yの場合
Y = y_new =  y_old + X
Y - X = y_old



フィボナッチっぽいぞ

1 1 2 3 5 8 13

例えば7は可能か？
X = 12 , Y = 5

x = 1, y = 1
x = 1, y = 2
x = 1, y = 3
x = 1  y = 4
x = 1  y = 5
x = 6  y = 5
x = 11


X = 5 ,Y = 2

x = 1 , y = 1
x = 1, y = 2;





*/