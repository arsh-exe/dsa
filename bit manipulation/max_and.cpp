#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int maxAND(vector<int>& arr) {
        // bruteforce:->
        // int maxi = 0;
       
        // for(int i = 0;i<arr.size();i++){
        //     for(int j = i+1;j<arr.size();j++){
        //         maxi = max(maxi,arr[i]&arr[j]);
        //     }
            
        // }
        // return maxi;
        //optimal-greedy approach
       
        // code here
        int ans = 0;
        for(int bit = 31;bit>=0;bit--){
            int cand = ans | (1<<bit);
            int cnt = 0;
            for(int num: arr){
                if((num&cand)==cand){
                    cnt++;
                }
            }
            if(cnt>=2){
                ans = cand;
            }
        }
        return ans;

    }
};

int main(){

return 0;
}