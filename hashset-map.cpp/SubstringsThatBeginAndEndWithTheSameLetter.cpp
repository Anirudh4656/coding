// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    long long numberOfSubstrings(string s){
        long long ans=0;
        unordered_map<char,long long>mpp;
        // for(char c:s){
        //   ans+= ++mpp[c];
        // }
        // for(auto &p:mpp){
        //     ans+=++mpp[]
        // }
        // return ans;
        //   int cnt[26]{};-----way to initialize array
        // long long ans = 0;
        // for (char& c : s) {
        //     ans += ++cnt[c - 'a'];
        // }
        // return ans;
        //using formula
           for(char c:s){
           mpp[c]++;
        }
        for(auto &p:mpp){
            ans+=(p.second*(p.second+1))/2;
        }
        return ans;
    }
};
int main() {
  Solution s;
  
   cout << "Try programiz.pro"<<" "<<s.numberOfSubstrings("abcba");

    return 0;
}
//Time Complexity: O(N) — traverse string once + 26 chars max for map summation
//Space Complexity: O(26) = O(1) — frequency map stores only lowercase letters
//alternate 
 int numIdenticalPairs(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        int cnt[101]{};
        for(int i:nums){
            count+=cnt[i]++;
            
            
        }
        return count;
    }