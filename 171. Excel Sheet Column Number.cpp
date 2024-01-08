class Solution {
public:
    int titleToNumber(string s) {
        long long ans = 0;
        for(auto c : s)
              ans = ans * 26 + (int)c - 64;
    
        
        return ans;
    }
};
