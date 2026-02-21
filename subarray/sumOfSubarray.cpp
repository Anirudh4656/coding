//o(n2);
int maxSubarraySum(vector<int> &arr) {
    int res = arr[0];
  
    // Outer loop for starting point of subarray
  	for(int i = 0; i < arr.size(); i++) {
    	int currSum = 0;
      
        // Inner loop for ending point of subarray
        for(int j = i; j < arr.size(); j++) {
        	currSum = currSum + arr[j];
          
            // Update res if currSum is greater than res
            res = max(res, currSum);
        }
    }
    return res;
}

int main() {
    vector<int> arr = {2, 3, -8, 7, -1, 2, 3};
    cout << maxSubarraySum(arr);
    return 0;
}
//optimised
//o(n)
ardwaj
2 days agoFeb 18, 2026 10:55 (GMT +5:30)

class Solution {
    int maxSubarraySum(int[] arr) {
        int maxSum = Integer.MIN_VALUE;
        int currentSum = 0;
        for (int num : arr) {
            currentSum += num;
            if (currentSum > maxSum) {
                maxSum = currentSum;
            }
            if (currentSum < 0) {
                currentSum = 0;
            }
        }
        return maxSum;
        //kadance algorithm
        class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Code here
        int maxSum=arr[0];
        int currentSum=arr[0];
        for(int i=1;i<arr.size();i++){
            currentSum=max(arr[i],currentSum+arr[i]);
            maxSum=max(maxSum,currentSum);
            
        }
        return maxSum;
        
    }
};