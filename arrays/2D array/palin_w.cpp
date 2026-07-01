#include <bits/stdc++.h>
using namespace std;

int main(){
int num = 12321;
int rev = 0;
int r;
int t = num;
while(t>rev){
r = t%10;
rev = rev*10 + r;
t/=10;
}
if(rev == t||t == rev/10){
    cout<<"true";
}
else{
    cout<<"false";

}
return 0;
}