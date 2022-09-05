#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    int N,K;
    ll cnt = 0;
    cin >> N >> K;
    int R,S,P;
    cin >> R >> S >> P;
    string t;
    cin >> t;
    int last_r = INT_MIN;
    int last_s = INT_MIN;
    int last_p = INT_MIN;
    for(int i=0; i<t.length(); i++){
        cout << "t[i] = " << t[i] << endl;
        if(t[i] == 'r'){
            cout << "last_p = " << last_p << endl;
            cout << "i - K = " << i-K << endl;
            cout << "before " << cnt << endl;
        }else if(t[i] == 's'){
            cout << "last_r = " << last_r << endl;
            cout << "i - K = " << i-K << endl;
            cout << "before " << cnt << endl;
        }else if(t[i] == 'p'){
            cout << "last_s = " << last_s << endl;
            cout << "i - K = " << i-K << endl;
            cout << "before " << cnt << endl;
        }
        if(t[i] == 'r'){
            if(last_p != i-K){
                cnt += P;
                last_p = i;
            }
        }else if(t[i] == 's'){
             if(last_r != i-K){
                cnt += R;
                last_r = i;
            }
        }else{
             if(last_s != i-K){
                cnt += S;
                last_s = i;
            }
        }
        cout <<  "after " << cnt << endl;
    }
    cout << cnt << endl;

}