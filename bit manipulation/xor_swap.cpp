#include <bits/stdc++.h>
using namespace std;

int main(){
int a  = 25,b = 50;
cout<<"before swapping "<<a<<" "<<b<<endl;
a = a^b;
b = a^b;
a = a^b;
cout<<"after swapping "<<a<<" "<<b;
return 0;
}