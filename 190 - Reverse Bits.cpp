class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        bitset<32> str(n);
        string s = str.to_string();
        reverse(s.begin(), s.end());
        uint32_t ans = 0;
        for(int i = 31; i>=0;i-- ) if(s[i]=='1') ans+=pow(2,31-i);
        return  ans;
    }
};
