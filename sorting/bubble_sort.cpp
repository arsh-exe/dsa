#include <bits/stdc++.h>
using namespace std;

int main(){
vector<int> arr = {24,25,66,72,12,22,11,10,25};
for(int i = 0;i<arr.size();i++){
    bool swap = false;
    for(int j= 0;j<arr.size();j++){
        if(arr[j]>arr[j+1]){
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
            swap = true;
        }

    }
    if(swap == false) break;
}
for(int i = 0;i<arr.size();i++){
    cout<<arr[i]<<" ";
}
return 0;
}