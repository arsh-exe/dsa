#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int ans = 0,e=0;
        while(numBottles>0){
            ans+=numBottles;
            e +=numBottles;
            numBottles=e/numExchange;
            e%=numExchange;
        }
        return ans;
    }
};
int main(){

return 0;
}