#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
#define mod 1000000007
constexpr array<int, 4> DY = {1, 0, -1, 0};
constexpr array<int, 4> DX = {0, 1, 0, -1};

vector<vector<pair<int,int>>> graph;
vector<int> ans;

void dfs(int current, int c=-1, int prev = -1){
    int k = 1;
    // cout << current << endl;
    for(auto node: graph[current]){
        if(node.first == prev) continue;
        if(k == c) ++k;
        ans[node.second] = k;
        k++;
        // cout << node.first << endl;
        dfs(node.first,ans[node.second],current);
    }
}

int main(){
    int N;
    cin >> N;
    graph.resize(N);
    ans.resize(N-1);
    for(int i=0; i<N-1; i++){
        int a,b;
        cin >> a >> b;
        a--;
        b--;
        graph[a].push_back({b,i});
        graph[b].push_back({a,i});
    }
    dfs(0);
    int mx = 0;
    for(int i=0; i<N; i++){
        mx = max(mx,(int)graph[i].size());
    }
    cout << mx << endl;
    for(int i=0; i<N-1; i++){
        cout << ans[i] << endl;
    }

}