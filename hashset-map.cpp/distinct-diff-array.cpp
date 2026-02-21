class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& nums) {
       unordered_map<int,int>mp;
       unordered_map<int,int>np;
       vector<int>ans;
       for(int num:nums){
        mp[num]++;
       }
       for(int n:nums){
        np[n]++;
        mp[n]--;
        if(mp[n]==0)mp.erase(n);
        ans.push_back(np.size()-mp.size());

       }
      return ans;  
    }
};