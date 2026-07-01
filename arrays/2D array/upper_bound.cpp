#include <bits/stdc++.h>
using namespace std;

int main(){
vector<int> arr = {1, 2, 2, 2, 4, 5};
int l = 0;
int h = arr.size()-1;
int m;
int ans = arr.size();

int k = 2;
while(l<=h){
m = l+(h-l)/2;
if(arr[m]>k){
ans = m;
h = m-1;
}
else{
    l = m+1;
}
}
cout<<ans;
return 0;
}