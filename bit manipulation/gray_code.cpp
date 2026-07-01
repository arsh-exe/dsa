#include <bits/stdc++.h>
using namespace std;
    string deci2bit(int num){
        string bin = "";

        while(num>0){
            if(num%2==1) bin+='1';
            else bin+='0';
            num = num/2;
        }
        reverse(bin.begin(),bin.end());
        return bin;
    }
int main() {
    // int n;
    // cin >> n;
    int x = 10;
    for(int i = 0;i<x;i++){
        int gray = i ^ (i >> 1);
        string y = deci2bit(gray);
        cout<<y<<" ";
    }
    // int gray = n ^ (n >> 1);
    // cout << "Gray Code: " << gray << endl;

    // int temp = gray;
    // int bin = temp;

    // while (temp >>= 1) {
    //     bin ^= temp;
    // }

    // cout << "Binary: " << bin;

    return 0;
}