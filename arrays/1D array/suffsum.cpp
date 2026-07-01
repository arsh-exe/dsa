#include <bits/stdc++.h>
using namespace std;

int main(){
int arr[] = {1,3,6,9,12};
int sum = 0;
for(int x: arr){
    sum += x;
}
for(int i = 0;i<5;i++){
    cout<<sum<<" ";
    sum-=arr[i];
}

return 0;
}