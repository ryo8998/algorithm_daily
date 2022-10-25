#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
#define mod 1000000007
constexpr array<int, 4> DY = {1, 0, -1, 0};
constexpr array<int, 4> DX = {0, 1, 0, -1};

int N;

int check(double x){
    double diff = x * x * x + x - N;
    if(abs(diff) <= 0.001){
        return 1;
    }else if(diff > 0.001){
        return 2;
    }else return 3;
}

int main(){
    cin >> N;
    double l = 1;
    double r = 100;
    while(l < r){
        double mid = (l + r) /2.0;
        if(check(mid) == 1){
            cout << mid << endl;
            return 0;
        }else if(check(mid) == 2){
            r = mid;
        }else {
            l = mid;
        }
    }
}