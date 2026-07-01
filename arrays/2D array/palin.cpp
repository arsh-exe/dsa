#include <bits/stdc++.h>
using namespace std;

int main(){
int num = 123;
int t = num;
int rev = 0;
while(t>0){
int r = t%10;
rev= rev*10+r;
t/=10;
}
cout<<rev<<" ";
if(rev == num){
    cout<<"Number is palindrome";
}
else{
    cout<<"Not a palindrome";
}
return 0;
}