#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
vector<string> m;
int H,W;

int DY[4] = {-1,0,1,0};
int DX[4] = {0,1,0,-1};


int bfs(int y, int x, vector<vector<bool>> &visited,vector<vector<int>> &dist){
    queue<pair<int,int>> q;
    int ans = 0;
    if(m[y][x] == '#'){
        return ans;
    }
    q.push({y,x});
    visited[y][x] = true;
    dist[y][x] = 0;
    // int front = q.front();
    while(!q.empty()){
        pair<int,int> front = q.front();
        q.pop();
        int y = front.first;
        int x = front.second;
        for(int i=0;i<4; i++){
            int ny = y +  DY[i];
            int nx = x +  DX[i];
            if(ny < 0 || nx < 0 || ny >= H || nx >= W) continue;
            if(visited[ny][nx] == true) continue;
          	if(m[ny][nx] == '#') continue;
          	q.push({ny,nx});
            dist[ny][nx] = dist[y][x] + 1;
            ans = max(ans,dist[y][x] + 1);
            visited[ny][nx] = true;
        }
    }
   //cout << ans << endl;
    return ans;

}



int main(){
    cin >> H >> W;
    int ans = 0;
    m.resize(H);
   
    for(int i=0; i<H; i++){
        cin >> m[i];
    }
    for(int i=0; i<H; i++){
        for(int j=0; j<W; j++){
            vector<vector<bool>> visited(H,vector<bool>(W,false));
            vector<vector<int>> dist(H,vector<int>(W,0));
            ans = max(ans,bfs(i,j,visited,dist));
        }
    }
    cout << ans << endl;
}