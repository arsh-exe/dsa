#include <bits/stdc++.h>
using namespace std;

int main(){
vector<int> arr ={4,2,2,8,3,3,1};
int mx = *max_element(arr.begin(),arr.end());
vector<int> count(mx+1,0);
for(int x: arr){
    count[x]++;
}
for (int i = 0; i <= mx; i++)   
{
    while(count[i]>0){
        cout<<i<<" ";
        count[i]--;
    }
}

return 0;
}