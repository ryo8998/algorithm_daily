#include <bits/stdc++.h>
typedef long long ll;
using namespace std;    
#define mod 1000000007
constexpr array<int, 4> DY = {1, 0, -1, 0};
constexpr array<int, 4> DX = {0, 1, 0, -1};

int main(){
    int Q;
    cin >> Q;
    unordered_map<string, int> m;
    for(int i=0; i<Q; i++){
        int num;
        cin >> num;
        if(num == 1){
            string person;
            int score;
            cin >> person >> score;
            m[person] = score;
        }else {
            string person;
            cin >> person;
            cout << m[person] << endl;
        }
    }
}