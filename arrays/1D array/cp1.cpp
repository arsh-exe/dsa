//i copy pasted most of them from MY leetcode solutions so these are in classes and functions
#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
    //3. running sum 
    vector<int> runningSum(vector<int>& nums) {
        vector<int> res(nums.size());
        int x = 0;
        for(int i = 0;i<nums.size();i++){
            x+=nums[i];
            res[i] = x;
        }
        return res;
    }
    //i created a new vector and did the increment addition with the help of loop
    //2. pivot index
int pivotIndex(vector<int>& nums) {
int sum =0;
for(int x:nums){
    sum+=x;
}
int lsum = 0;
int rsum = 0;

for(int i = 0;i<nums.size();i++){
rsum +=  sum-lsum-nums[i];
    if(lsum == rsum){
        return i;
    }
    lsum+=nums[i];
}
return -1;
}
//removing duplicates:
 int removeDuplicates(vector<int>& nums) {
        if(nums.empty()) return 0;
        int k = 1;
        for(int i = 1;i<nums.size();i++){
         if(nums[i] != nums[i-1]){
            nums[k] = nums[i];
            k++;
         }

        }
        return k;

    }
    // maximum subarray
    int maxSubArray(vector<int>& nums) {
        int maxi = INT_MIN;
        int sum = 0;
        for(int i = 0;i<nums.size();i++){
            sum+=nums[i];
            if(sum>maxi){
                maxi = sum;
            }
            if(sum<0){
                sum = 0;
            }
            
        }
        return maxi;
        }
// max average subarray
 double findMaxAverage(vector<int>& nums, int k) {
        double sum = 0;
        for(int i = 0;i<k;i++){
            sum+=nums[i];
        }
        double maxi = sum;
        for(int i = k;i<nums.size();i++){
            sum+=nums[i];
            sum-=nums[i-k];
            maxi = max(maxi,sum);
        }
        return maxi/k;
    }
    };
//here i am calculating total sum first then calculating rightsum by subtracting leftsum and then checking wiht if statement if lsum == rsum then returning the index else adding nums[i] to lsum 
int main(){
//1.traversing
int arr[] = {1,2,3,4,5,6,7,8,9,10};
for (int i = 0; i < 10; i++)
{
    cout<<arr[i]<<endl;
}
vector<int> arrs(10);
    for(int i = 0;i<10;i++){
        arrs[i] = arr[i];
    }
    Solution sol;
    int x = sol.pivotIndex(arrs);
    cout<<x<<endl;
      vector<int> res(arrs.size());
        int z = 0;
        for(int i = 0;i<arrs.size();i++){
            z+=arrs[i];
            res[i] = z;
        }
    for(int k: res){
        cout<<k<<" ";
    }
    int s = 0;
    for (int i = 0; i < arrs.size(); i++)
    {
        s+=arrs[i];
    }
    cout<<endl<<"Sum = "<<s<<endl<<"Average: "<<s/arrs.size()<<endl;
    int max  =arrs[1];
    for (int i = 0; i < arrs.size(); i++)   
    {
        if(max<arrs[i]){
            max = arrs[i];
        }
    }
    
    cout<<"Max: "<<max;
    sort(arrs.begin(),arrs.end());
    cout<<endl<<arrs[arrs.size()-2];
    return 0;
}