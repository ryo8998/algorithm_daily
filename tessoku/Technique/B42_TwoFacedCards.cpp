#include <bits/stdc++.h>
typedef long long ll;
using namespace std;    
#define mod 1000000007
constexpr array<int, 4> DY = {1, 0, -1, 0};
constexpr array<int, 4> DX = {0, 1, 0, -1};
 vector<pair<ll,ll>> cards;


int main(){
    ll N;
    cin >> N;
    cards.resize(N);
    for(int i=0; i<N; i++){
        ll a,b;
        cin >> a >> b;
        cards[i] = {a,b};
    }
    ll sum = 0;
    ll ans = 0;

    for(int i=-1;i<=1; i+=2){
        for(int j=-1; j<=1; j+=2){
            sum = 0;
            for(int k=0; k<N; k++){
                ll a = cards[k].first * i;
                ll b = cards[k].second * j;
                if(a + b > 0){
                    sum += a + b;
                }
            }
            ans = max(ans, sum);
        }
    }
    cout << ans << endl;
}


/*


表の総和の絶対値＋裏の総和の絶対値を最大化する方法は以下4つがある
・　表の総和　＋　裏の総和を最大化する
・　表の総和　ー　裏の総和を最大かする
・　ー表の総和　＋　裏の総和を最大化する
・　ー表の総和　ー　裏の総和を最大化する

一番上の場合、Ai + Bi > 0であるカードをすべてえらび、そうでないカードを選ばない
二番目はAi - Bi　> 0のとき
三番目は　Bi - Ai > 0のとき
四番目は ーAi + ーBi > 0のとき


以下ぼつ

・もちろん全てのカードを取る、取らないはできない O(2^N)かかるため
・例えば、表だけならプラスかマイナスで絶対値の大きい方を選んでそれの総和が最大値
・そして裏だけでも同じことができるが、

2 8
4 -5
5 -3
-4 1
-2 -3


A 2 1
B -1 4

Aだけの場合、スコア　3
Bだけの場合、スコア　5
A、B両方選んだ場合、スコア　6


A 5 2
B 4 -2

Aだけの場合、スコア　7
Bだけの場合、スコア　6
A、B両方選んだ場合、スコア　9



*/