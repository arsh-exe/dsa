#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    while(b!=0){
        int temp = b;
        b = a%b;
        a = temp;
    }
    return a;
}
int lcm(int a,int b){
    return a*b/(gcd(a,b));
}
int main(){
int num = 10,num2 = 45;
int hcf = gcd(num,num2);
int l = lcm(num,num2);
cout<<"HCF: "<<hcf<<" LCM: "<<l;
return 0;
}