#include <bits/stdc++.h>
using namespace std;

int main(){
    string str1 = "Listen";
    string str2 = "Silent";
    if(str1.length()!= str2.length()){
        return false;
    }
    if(str1.compare(str2)){
        cout<<true;
    }
    else{
        cout<<false;
    }

return 0;
}