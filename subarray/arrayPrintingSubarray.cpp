// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int>maxSumArray(vector< int> array){
    // int res=array[0];
    // int curr=arr[0];
    vector<int>ans;
    int sum=0;
    int start=0;
    int end=0;
    int current=0;
     int currentSum=0;
    for(int i=0;i<array.size();i++){
           
            if(array[i] >currentSum+array[i] ){
                currentSum=array[i];
               current=i;
               
        }else {
            currentSum+=array[i];
        }
        if(currentSum>sum){
            sum=currentSum;
            start=current;
            end=i;
        }
    }
    for(int i=start;i<=end;i++){
        ans.push_back(array[i]);
    }
    return ans;
    
}
int main() {
vector< int> array={1,2,3,-8,-7,6,8};
vector<int>res=maxSumArray(array);
 for(int r:res){
     cout<<r<<" ";
 }

    return 0;
}