#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int p: nums){
            mp[p]++;
        }
        vector<pair<int,int>>temp(mp.begin(),mp.end());
        sort(temp.begin(),temp.end(),[](auto &a,auto &b){
            return a.second>b.second;
        });
        vector<int>ans;
        for(int i =0;i<k&&i<temp.size();i++){
            ans.push_back(temp[i].first);
        }
        return ans;
    }
};
int main(){

return 0;
}