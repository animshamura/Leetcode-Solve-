class Solution {
public:
    int longestPalindrome(string s) {
        set<char> str (s.begin(), s.end());
        int ans = 0,n;
        int k = 0;
        for(char c : str){
           n = count(s.begin(), s.end(),c);
           if(n%2)k=1;
           ans+=n-n%2;
        }
        return ans+k;
    }
};
