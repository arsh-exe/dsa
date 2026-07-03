#include <bits/stdc++.h>
using namespace std;

int main(){
int arr[ ] = {23,7,8,23,1,10};
int k = 23;
int f = 0;
vector<int> index;
int c = 0;

for(int i = 0;i<6;i++){
    if(arr[i] == k){
        f = 1;
        c++;
        index.push_back(i);
    }
}
if(f==1){
    cout<<"found on index ";
    for(int i  = 0;i<c;i++){
        cout<<index[i]<<" and ";
        
    }
    cout<<" comes "<<c<<" times"<<endl;
}
else{
    cout<<"not found";
}
return 0;
}