#include <bits/stdc++.h>
typedef long long ll;
using namespace std;    
#define mod 1000000007
constexpr array<int, 4> DY = {1, 0, -1, 0};
constexpr array<int, 4> DX = {0, 1, 0, -1};

int main(){
    int N;
    string S;
    cin >> N >> S;
    vector<int> bottom1(N);
    vector<int> bottom2(N);
    bottom1[0] = 1;
    bottom1[N-1] = 1;

    int count1 = 1;
    for(int i=0; i<N-1; i++){
        if(S[i] == 'A'){
            count1++;
        }else{
            count1 = 1;
        }
        bottom1[i+1] = count1;
    }

    int count2 = 1;
    for(int i=N-2; i>=0; i--){
        if(S[i] == 'B'){
            count2++;
        }else{
            count2 = 1;
        }
        bottom2[i] = count2;
    }

    ll ans = 0;
    for(int i=0; i<N; i++){
        ans+= max(bottom1[i], bottom2[i]);
    }
    cout << ans << endl;

}


/*


N = 7
S = AABBBA

草の高さは0以下にはできないので、Bが始まる前には連続するB＋1になっていなくてはいけない

草の高さは絶対に〇〇以上であるという下限値を考えることが重要
今回の場合、＜　と　＞の両方から下現値を考える


*/