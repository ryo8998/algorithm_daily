#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
#define mod 1000000007
constexpr array<int, 4> DY = {1, 0, -1, 0};
constexpr array<int, 4> DX = {0, 1, 0, -1};

int main(){
    int N;
    cin >> N;
    vector<pair<int,int>> jobs(N);
    for(int i=0; i<N; i++){
        int a,b;
        cin >> a >> b;
        jobs[i] = {b,a};
    }
    sort(jobs.begin(),jobs.end());
    ll sum = 0;
    for(int i=0; i<N; i++){
        sum += jobs[i].second;
        // cout << sum << endl;

        if(jobs[i].first < sum){
            // cout << "jobs " << jobs[i][1] << endl;
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}