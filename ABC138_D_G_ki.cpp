#include <bits/stdc++.h>
using namespace std;

typedef long long ll;


void dfs(vector<vector<int>> &tree, int current, vector<bool> &visited, int sum, vector<int> &ans, vector<int> &A){
    sum = sum + A[current];
    ans[current] = sum;
    visited[current] = true;
    for(auto n: tree[current]){
        if(visited[n] == true) continue;
        dfs(tree, n, visited, sum, ans, A);
    }
}

int main(){
    int N,Q;
    cin >> N >> Q;
    vector<vector<int>> tree(N,vector<int>());
    vector<int> A(N);
    vector<int> ans(N);
    for(int i=1; i<N; i++){
        int a,b;
        cin >> a >> b;
        a--;
        b--;
        tree[a].push_back(b);
        tree[b].push_back(a);
    }
    for(int i=0; i<Q; i++){
        vector<bool > visited(N,false);
        int p,q;
        cin >> p >> q;
        p--;
        A[p] += q;
    }
    vector<bool > visited(N,false);
    dfs(tree,0,visited,0,ans,A);
    for(int i=0; i<N; i++){
        cout << ans[i] << " ";
    }

}