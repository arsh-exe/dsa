#include <bits/stdc++.h>
using namespace std;

int main(){
int arr[] = {1,2,3,4,5,6};
for(int i = 0;i<6;i++){
 for (int j = i; j < 6; j++)
 {
    cout<<"[";
    for (int k = i; k <= j; k++)
    {
        cout<<arr[k];
        if(k<j) cout<<", ";
    }
    cout<<"],";
    
 }
 
}
return 0;
}