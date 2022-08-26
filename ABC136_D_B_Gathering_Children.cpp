#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
#define mod 1000000007
constexpr array<int, 4> DY = {1, 0, -1, 0};
constexpr array<int, 4> DX = {0, 1, 0, -1};

int main(){
    string s;
    cin >> s;
    pair<int,int> a = {0,0};
    vector<int> ans(s.length(),0);
    int index = 0;
    int i = 0;
    while(s[i] != 0){
        int cnt = 0;
        cout << i << endl;
        while(s[i] == 'R' && s[i+1] != 'L'){
            if(cnt % 2 == 0){
                a.second += 1;
            }else{
                a.first += 1;
            }
            i++;
            cnt++;
        }
        if(s[i] == 'R' && s[i+1] == 'L'){   
            ans[i] = a.first + 1;
            ans[i+1] = a.second + 1;
            index = i;
            i+=2;
            a = {0,0};
        }
        cnt = 0;
        while(s[i] == 'L'){
            if(cnt % 2 == 0){
                a.first += 1;
            }else{
                a.second += 1;
            }
            i++;
            cnt++;
        }
        cout << "first " << a.first << endl;
        cout << "second " << a.second << endl;
        cout << "index " << index << endl; 
        ans[index] += a.first;
        ans[index+1] += a.second;
        a = {0,0};
    }

    for(int i=0; i<s.length(); i++){
        cout << ans[i] <<  " ";
    }

}