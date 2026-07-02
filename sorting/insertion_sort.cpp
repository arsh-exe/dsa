#include <bits/stdc++.h>
using namespace std;

int main(){
vector<int> arr = {22,33,1,55,62,23,87};
for(int i =1;i<arr.size();i++){
    int key = arr[i];
    int j = i-1;
    while(j >= 0 && arr[j] > key){
        arr[j + 1] = arr[j];
            j--;
        }
        arr[j+1]= key;

}
for (int i = 0; i < arr.size(); i++)        
{
    cout<<arr[i]<<" ";
}

return 0;
}