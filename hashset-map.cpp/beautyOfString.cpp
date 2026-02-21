class Solution {
public:
    int beautySum(string s) {
        int n=s.size();
        int ans=0;
        for(int i=0;i<n;i++){
int arr[26]{};
for(int j=i;j<n;j++){
int mini=INT_MAX;
int maxi=INT_MIN;
arr[s[j]-'a']++;
for(int k=0;k<26;k++){
    if(arr[k]>0){
        mini=min(mini,arr[k]);
        maxi=max(maxi,arr[k]);
    }

}

ans+=(maxi-mini);
}

        }
        return ans;
        
    }
};