#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    static bool cmp(pair<char,int>a,pair<char,int>b){
        return a.second>b.second;

    }
    string frequencySort(string s) {
        unordered_map<char,int>mp;
        for(char x: s){
            mp[x]++;
        }
        string ans = "";
  
        vector<pair<char,int>>v;
        for(auto p : mp){
            v.push_back(p);
        }
        sort(v.begin(),v.end(),cmp);
        for(auto p:v){
            while(p.second--){
                ans+=p.first;
            }
        }
        return ans;

    }
};
int main(){

return 0;
}