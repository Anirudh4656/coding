// Online C++ compiler to run C++ program online


//O(n*2)
int maxProduct(vector<int> &arr) {

    int n = arr.size();
  
    // Initializing result
    int maxProd = arr[0];

    for (int i = 0; i < n; i++) {
        int mul = 1;
      
        // traversing in current subarray
        for (int j = i; j < n; j++) {
          	mul *= arr[j];
          
            // updating result every time
            // to keep track of the maximum product
            maxProd = max(maxProd, mul);
        }
    }
    return maxProd;
}


//optimised O(n)#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int maxProductArray(vector< int> array){
    // int res=array[0];
    // int curr=arr[0];
   
    int maxProduct=array[0];
    int startMin=array[0];
    int startMax=array[0];
    
    for(int i=1;i<array.size();i++){
        int temp=max({array[i],startMin*array[i],startMax*array[i]});   
        startMin=min({array[i],startMin*array[i],startMax*array[i]}); 
        startMax=temp;
        maxProduct=max(maxProduct,startMax);
          
    }
  
    return maxProduct;
    
}
int main() {
vector< int> array={-2, 6, -3, -10, 0, 2};
int res=maxProductArray(array);
cout<<res<<" ";

    return 0;
}
//another optimised ans
int maxProduct(vector<int> &arr) {

  	int n = arr.size();
    int maxProd = INT_MIN;
  
    // leftToRight to store product from left to Right
    int leftToRight = 1;
  
    // rightToLeft to store product from right to left
    int rightToLeft = 1;
  
    for (int i = 0; i < n; i++) {
        if (leftToRight == 0)
            leftToRight = 1;
        if (rightToLeft == 0)
            rightToLeft = 1;
      
        // calculate product from index left to right
        leftToRight *= arr[i];
      
        // calculate product from index right to left
        int j = n - i - 1;
        rightToLeft *= arr[j];
        maxProd = max({leftToRight, rightToLeft, maxProd});
    }
    return maxProd;