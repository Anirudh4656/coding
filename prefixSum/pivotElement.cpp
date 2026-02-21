class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int sum=0;
        for(int num:nums){
            sum+=num;
        }
        int left=0;
        for(int i=0;i<nums.size();i++){
int right=sum-left-nums[i];
if(left==right)return i;
left+=nums[i];
        }
        return -1;
    }
};