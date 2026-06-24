#include <bits/stdc++.h>
using namespace std;

int main(){
int arr[] = {1,2,3,4,5,6};
int x= 0;
int arr2[6];
for(int i = 0;i<6;i++){
x+=arr[i];
arr2[i] = x;
}
for(int i = 0;i<6;i++){
    cout<<arr2[i]<<" ";
}

return 0;
}