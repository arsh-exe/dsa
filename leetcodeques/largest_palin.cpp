#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestPalindrome(string s) {
        // if(s.size()=1){
        //     return 1;
        // }
        // if()
        unordered_map<char,int>mp;
        for(auto p:s){
            mp[p]++;
        }
        int ans = 0;

        int odd = 0;
        for(auto p : mp ){
            if(p.second%2==0){
                ans+=p.second;
            }
            else{
                ans+=p.second-1;
                odd=1;
            }
        }
        if(odd){
            ans+=1;
        }
        return ans;
    }
};
int main(){

return 0;
}