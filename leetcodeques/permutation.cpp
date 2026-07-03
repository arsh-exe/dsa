#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> ans;
    void algo(vector<int>&nums,int ind){
        if(ind == nums.size()){
            ans.push_back(nums);
            return;
        }
        for(int i = ind;i<nums.size();i++){
            swap(nums[ind],nums[i]);
            algo(nums,ind+1);
            swap(nums[ind],nums[i]);
        }

    }
    vector<vector<int>> permute(vector<int>& nums) {
        algo(nums,0);
        return ans;
    }
};
int main(){

return 0;
}