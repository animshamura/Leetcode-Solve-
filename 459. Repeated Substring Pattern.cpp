class Solution {
 public:
  bool repeatedSubstringPattern(string s) {
    const string ans = s + s;
    return ans.substr(1, ans.length() - 2).find(s) != string::npos;
  }
};
