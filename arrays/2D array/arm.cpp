#include <bits/stdc++.h>
using namespace std;
int power(int base, int exp){
    int ans = 1;
    while(exp--){
        ans *= base;
    }
    return ans;
}
int main(){
int num = 9474;
int t = num;
int c = 0;
while(t>0){
    t/=10;
    c++;
}
int ans = 0;
int r;
t = num;
for(int i = 1;i<=c;i++){
    r = t%10;
    ans += (int)power(r,c);
    t/=10;
}
cout<<ans<<endl;
if(ans == num){
    cout<<num;
}
else{
    cout<<"False";
}
return 0;
}