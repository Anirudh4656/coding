class Solution {
public:
    int getMaxLen(vector<int>& nums) {
       
     int n=nums.size();
     int product=1;
       int length=0;
       int ans=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                product=1;
                length=0;
                continue;
            }
           if(nums[i]>0){
            product*=1;
           }else if(nums[i]<0){
            product*=-1;
           }
        length++;
        if(product>0){
            ans=max(ans,length);
        }
               

        }
        length=0;
        product=1;
         for(int j=n-1;j>=0;j--){
            
           if(nums[j]==0){
                product=1;
                length=0;
                continue;
            }
              if(nums[j]>0){
            product*=1;
           }else if(nums[j]<0){
            product*=-1;
           }  
            length++;
        if(product>0){
            ans=max(ans,length);
        }  

        }
        return ans;
    }
};