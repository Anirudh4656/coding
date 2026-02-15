#include <iostream>
using namespace std;
class Solution{
    public:
    bool isPrime(int data){
        if(data <=1)return false;
        int count =0;
        for(int i=1;i*i<=data;i++){
            if(data%i==0){
              return false;
            }
           
        }
       return true;
           
    }
};
int main() {
Solution sol;
cout<<"29 is Prime or not "<<sol.isPrime(29)<<endl;
cout<<"26 is Prime or not "<<sol.isPrime(26)<<endl;
cout<<"24 is Prime or not "<<sol.isPrime(4)<<endl;
cout<<"2 is Prime or not "<<sol.isPrime(2)<<endl;

    return 0;
}