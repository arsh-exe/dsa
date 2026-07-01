#include <bits/stdc++.h>
using namespace std;

int main(){
vector<int> arr = {1, 3,5,67,54,89};
int l = 0;
int h = arr.size()-1;
int m;
int ans = arr.size();

int k = 10;
while(l<=h){
m = l+(h-l)/2;
if(arr[m]>=k){
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