#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
  bool canPlace(vector<int> &stalls,int cows,int dis){
        int placed = 1;
        int last = stalls[0];
        for(int i = 0;i<stalls.size();i++){
            if(stalls[i]-last >= dis){
                placed++;
                last = stalls[i];
                if(placed ==cows){
                    return true;
                }
                
            }
        }
        return false;
  }
    int aggressiveCows(vector<int> &arr, int k) {
        // code here
        sort(arr.begin(),arr.end());
        int ans = 0;
        int l = 0,h = arr[arr.size()-1]-arr[0];
        while(l<=h){
            int m = l + (h-l)/2;
            if(canPlace(arr,k,m)){
                ans = m;
                l = m+1;
                
            }
            else{
                h = m-1;
            }
        }
        return ans;
    }
};
int main(){

return 0;
}