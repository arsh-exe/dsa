#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>>dir={{0,1},{1,0},{-1,0},{0,-1}};
    void bfs(vector<vector<int>>& grid,vector<vector<int>>&dist,queue<pair<int,int>>&q){
        int n=grid.size();
        int td=0;
        while(!q.empty()){
            int s=q.size();
            while(s--){
                int ti=q.front().first;
                int tj=q.front().second;
                dist[ti][tj]=min(dist[ti][tj],td);
                q.pop();
                for(auto&d:dir){
                    int ni=ti+d[0];
                    int nj=tj+d[1];
                    if(ni>=0 && ni<n && nj>=0 && nj<n && td+1<dist[ni][nj]){
                        q.push({ni,nj});
                        dist[ni][nj]=td+1;
                    }
                }
            }
            td++;
        }
    }
    void Manhattan(vector<vector<int>>& grid,vector<vector<int>>&dist)
    {
        int n=grid.size();
        queue<pair<int,int>>q;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1)q.push({i,j});
            }
        }
        bfs(grid,dist,q);
        
    }

    int maximumSafenessFactor(vector<vector<int>>& grid) {
        int n= grid.size();
        vector<vector<int>>dist(n,vector<int>(n,INT_MAX));
        Manhattan(grid,dist);
        priority_queue<pair<int,pair<int,int>>> pq;
        pq.push({dist[0][0],{0,0}});
        vector<vector<int>>maxi(n,vector<int>(n,-1));
        maxi[0][0]=dist[0][0];
        while(!pq.empty()){
            int mini=pq.top().first;
            int i=pq.top().second.first;
            int j=pq.top().second.second;
            if(i==n-1 && j==n-1)return mini;
            pq.pop();
            for(auto&d:dir){
                int ni=i+d[0];
                int nj=j+d[1];
                if(ni>=0 && ni<n && nj>=0 && nj<n && (min(dist[ni][nj],mini))>maxi[ni][nj]){
                    maxi[ni][nj]=min(dist[ni][nj],mini);
                    pq.push({min(dist[ni][nj],mini),{ni,nj}});
                }
            }
        }
        return 0;
        
    }
};
int main(){

return 0;
}