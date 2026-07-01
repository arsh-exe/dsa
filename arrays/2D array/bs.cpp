#include <bits/stdc++.h>
using namespace std;
int bs(vector<int>& arr,int h,int l,int k){
    if(l>h){
        return -1;
    }
    int mid = l+(h-l)/2;
    if(arr[mid] == k){
        return mid;
    }
    if(arr[mid]<k){
        return bs(arr,h,mid+1,k);
    }
        return bs(arr,mid-1,1,k);

}
int main(){
vector<int> arr {22,11,33,20,12,66};
int l = 0;
int h = arr.size()-1;
int m;
int k = 20;
int f = 0;
int index = -1;
sort(arr.begin(),arr.end());
while(l<h){
    m = l+(h-l)/2;
    if(arr[m] == k){
        f = 1;
        index = m;
        break;
    }
    if(arr[m]<k){
        l = m+1;
    }
    else{
        l = m-1;
    }
}
if(f==1){
    cout<<"Found on index "<<index;
}
else{
    cout<<"Not found";
}
//recursive
int ix = bs(arr, arr.size() - 1,0,k);

    if (ix != -1)
        cout << "\nElement found at index: " << ix << endl;
    else
        cout << "Element not found " << endl;


return 0;
}