#include <iostream>
using namespace std;
class Solution{
    public:
    int sumOfFN_Formula(int n){
        return (n*(n+1))/2;
    }
    int sumOfFN_Loop(int n){
        int sum=0;
        for(int i=1;i<=n;i++){
            sum+=i;
            
        }
        return sum;
    }
    
};
int main() {
 Solution sol;
 int test_Cases[]={10,20,30};
 for(int test:test_Cases){
     cout<<"number is"<<test<<endl;
     cout<<"using formula"<<sol.sumOfFN_Formula(test)<<endl;
       cout<<"using loop"<<sol.sumOfFN_Loop(test)<<endl;
 };
 

    return 0;
}