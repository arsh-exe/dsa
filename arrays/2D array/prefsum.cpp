#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[3][2] = {{1,2},{3,4},{5,6}};
    int arr2[3][2];
    int sum = 0;
    for(int i = 0;i<3;i++){
        for(int j = 0;j<2;j++){
            sum += arr[i][j];
            arr2[i][j] = sum;
        }
    }
    for(int i = 0;i<3;i++){
        cout<<"{ ";
        for(int j = 0;j<2;j++){
            cout<<arr2[i][j]<<" ";
        }
        cout<<"}";
    }
return 0;
}