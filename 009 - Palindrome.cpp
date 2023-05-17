class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        int t =  s.size()-1;
        bool ans = true;
        for(int i = 0; i < s.size()/2; i++){
            if(s[i]!=s[t--]){
               ans = false;
               break;
            }
        }
        return ans;
    }
};
