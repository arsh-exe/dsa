#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool findSafeWalk(vector<vector<int>>& grid, int health) {
        
        int m = grid.size();
        int n = grid[0].size();

        vector<vector<int>> mov= {{-1,0}, {0,1}, {0,-1}, {1,0}};

        vector<vector<int>> dist(m, vector<int>(n, INT_MAX));

        set<pair<int, pair<int,int>>> st;
        dist[0][0] = grid[0][0];

        st.insert({dist[0][0], {0,0}});

        while(!st.empty()){

            auto topElement = st.begin();
            pair<int, pair<int,int>> topPair = *topElement;

            int topDist = topPair.first;
            int r = topPair.second.first;
            int c = topPair.second.second;

            st.erase(st.begin());

            for(auto &d : mov)
            {
                int nr = r + d[0];
                int nc = c + d[1];

                if(nr >= 0 && nr<m && nc >= 0 && nc < n && topDist+grid[nr][nc] < dist[nr][nc])
                {
                    auto priviousEntry = st.find({dist[nr][nc], {nr,nc}});

                    if(priviousEntry != st.end())
                    {
                        st.erase(priviousEntry);
                    }


                    dist[nr][nc] = topDist + grid[nr][nc];
                    st.insert({dist[nr][nc], {nr,nc}});
                }
            }
        }

        int remHealth = health - dist[m-1][n-1];

        if(remHealth > 0) return true;

        return false;
        

        

    }
};
int main(){

return 0;
}