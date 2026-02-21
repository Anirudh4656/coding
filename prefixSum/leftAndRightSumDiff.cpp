class Solution {
public:
vector<int>prefix;
void prefixSum(vector<int>& nums){
     prefix=nums;
     for(int i=1;i<nums.size();i++){
        prefix[i]+=prefix[i-1];
     }
    

}
    vector<int> leftRightDifference(vector<int>& nums) {
       prefixSum(nums);
       vector<int>ans;
       int n=nums.size();
for(int i=0;i<n;i++){
    int left;
    if(i==0)left=0;
    else left=prefix[i-1];
    
    int right=prefix[n-1]-prefix[i];
    ans.push_back(abs(left-right));

}
return ans;
        
    }
};
//above solution will take a extra space of O(n)
class Solution {
public:

    vector<int> leftRightDifference(vector<int>& nums) {
       vector<int>ans;
       int n=nums.size();
       int total=0;
       for(int num:nums){
total+=num;
       }
       int left=0;
for(int i=0;i<n;i++){
    int right=total-nums[i]-left;
    ans.push_back(abs(left-right));
    left+=nums[i];

}
return ans;
        
    }
};