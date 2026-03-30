// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include <bits/stdc++.h>
class Solution{
    public :
      int longestOnes(vector<int>& nums) {
         int n=nums.size();
         int length=0;
           
            for(int i=0;i<n;i++){
                unordered_map<int,int>mpp;
                int len=0;
                 for(int j=i;j<n;j++){
                mpp[nums[j]]++;
                if(mpp.size()>2){
                    break;
                }
                len++;
            
        }
         length=max(length,len);
            }
           
        
        return length; 
     }
};
int main() {
   Solution sol;
    vector<int> nums = {1,2,1};
   

    // Output the result
    cout << sol.longestOnes(nums) << endl;

    return 0;
}
using sliding window and two pointer
class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n=fruits.size();
        int result=0;
        int l=0;
        unordered_map<int,int>mpp;
        for(int i=0;i<n;i++){
mpp[fruits[i]]++;
while(mpp.size()>2){
    mpp[fruits[l]]--;
    if(mpp[fruits[l]]==0)mpp.erase(fruits[l]);
    l++;
}
result=max(result,i-l+1);


        }
       return result; 
    }
};
this question is same as longest substring atmost k distinct element