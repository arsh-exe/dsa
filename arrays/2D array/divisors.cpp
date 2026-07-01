#include <bits/stdc++.h>
using namespace std;

int main(){
int num=100;
for(int i = 1;i<sqrt(num);i++){
    if(num%i==0){
        cout<<i<<endl;
        if(i!=num/i){
            cout<<num/i<<endl;
        }
    }
}

return 0;
}