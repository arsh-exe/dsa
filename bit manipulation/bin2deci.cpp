#include <bits/stdc++.h>
using namespace std;
class solution{
public:

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
    int bin2deci(string s){
            int deci = 0;
            int x = 0;
            int len = s.length();
            for(int i=len-1;i>=0;i--){
                if(s[i] == '1'){
                    deci += pow(2,x);
                }
                x++;

            }   
            return deci; 
        }

};
int main(){
int a;
cout<<"Enter the number you want to convert into binary"<<endl;
solution obj;
cin>>a;
string ans = obj.deci2bit(a);
cout<<"binary number of "<<a<<" is "<<ans<<endl;


return 0;
}