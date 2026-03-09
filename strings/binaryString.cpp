class Solution {
public:
    string addBinary(string a, string b) {
        int i=a.length()-1;
        int j=b.length()-1;
        int carry=0;
        string result="";
        while(i>=0||j>=0||carry){
if(i>=0){
carry+=a[i--]-'0';
}
if(j>=0){
carry+=b[j--]-'0';
}
result=char((carry%2)+'0')+result;
carry/=2;
        }
        return result;
    }
};