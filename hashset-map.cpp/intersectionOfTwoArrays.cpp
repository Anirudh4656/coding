vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
       unordered_set<int>st(nums1.begin(),nums1.end());
        unordered_set<int>st2;
       for(int num:nums2){
        if(st.count(num)){
           st2.insert(num);
        }
       }
      for(int i:st2){
        ans.push_back(i);
      }
        return ans;
        
 //using hash set time complexity will be :
 //    unordered_set<int>st(nums1.begin(),nums1.end());->this insertion will take O(1) and for n elements complexity will be O(n)
 //st.count(num) and st2.insert(num) will take O(1) operations but for m elements tc will be O(m)
 //for(int i:st2){ ans.push_back(i);} this loop will run for k iteration which is intersaction of both two arrays and its complexity will be less above two
 //final complexity will be O(n)+O(m)+O(k) neglecting O(k) as O(k)<=min O(n,m);



//using two pointer
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        int n1=nums1.size();
          int n2=nums2.size();
    sort(nums1.begin(),nums1.end());//O(nlogn)
       sort(nums2.begin(),nums2.end());//O(mlogm)
       int i=0;
       int j=0;
       while(i<n1&&j<n2){

        if(nums1[i]==nums2[j]){

            if(ans.empty() || ans.back()!=nums1[i]){
                ans.push_back(nums1[i]);
            }
i++;
j++;
        }else if(nums1[i]<nums2[j]){
i++;

        }else{
            j++;
        }
       }
      
        return ans;
        
    }
}; 
//what if duplicates are allowed
//can use two pointer firstly we have to sort overall time complexity will be O(nlogn+ m logm)
//
// What if nums1's size is small compared to nums2's size? Which algorithm is better?
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
         vector<int>ans;
        int n1=nums1.size();
          int n2=nums2.size();
          if(n1<n2)return intersect(nums2,nums1);
unordered_map<int,int>mpp;

   for(int i=0;i<n2;i++){
    mpp[nums2[i]]++;
   }
   for(int i:nums1){
    if(mpp[i]>0){
        ans.push_back(i);
        mpp[i]--;
    }
   }
   return ans;
    }
};