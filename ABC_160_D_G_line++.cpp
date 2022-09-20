#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

vector<vector<int>> g;
vector<int> dist;
vector<bool> visited;
map<pair<int,int>,int> m;
int N;

void bfs(int num){
    queue<int> q;
    q.push(num);
    dist[num] = 1;
    visited[num] = true;
    while(!q.empty()){
        int num = q.front();
        q.pop();
        for(auto node : g[num]){
            if(visited[node] != -1) continue;
            dist[node] = dist[num] + 1;
            visited[node] = true;
            q.push(node);
        }
    }
    for(int i=0; i<N; i++){
        if(i == num )continue;
        if(m.find({min(num,i),max(num,i)}) == m.end()){
            m[{min(num,i),max(num,i)}] = dist[i];
        }else{
            m[{min(num,i),max(num,i)}] = min(m[{min(num,i),max(num,i)}],dist[i]);
        }
    }
}

int main(){
    int X,Y;
    cin >> N >> X >> Y;
    X--;
    Y--;
    g = vector<vector<int>> (N,vector<int>());
    for(int i=0; i<N-1; i++){
        g[i].push_back(i+1);
    } 
    g[X].push_back(Y);
    g[Y].push_back(X);
    for(int i=0; i<N; i++){
        visited = vector<bool>(N,false);
        dist = vector<int>(N,-1);
        bfs(i);
    }
    auto i = m.begin();
    while(i != m.end()){
        cout << (i->first.first) << " ";
        cout << (i->first.second) << endl;
        cout << (i->second) << endl;
        i++;
    }
   
    
}