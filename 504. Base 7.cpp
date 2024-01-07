class Solution {
public:
    string convertToBase7(int num) {
        string ans;
        int k = num;
        if(num < 0) num*=-1;
        while(num){
            ans = to_string(num%7) + ans;
            num/=7;        
    }
    if(k==0) ans = "0";
    if(k<0) ans = '-' + ans;
    return ans;
    }
};
