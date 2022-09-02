#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    double a,b,x;
    cin >> a >> b >> x;
    double rad = 0.0;
    double ans = 0.0;
    double S = x/a;
    if(S >= a*b/2){
        double h = (a*b - S)*2/a;
      //cout << h << endl;
        rad = atan2(h,a);
    }else{
        double w = S/b * 2;
      //cout << w << endl;
        rad = atan2(b,w);
    }
   //cout << rad << endl;
   //cout << acos(-1) << endl;
    ans = rad / acos(-1) * 180;
    printf("%.10f",ans);
}