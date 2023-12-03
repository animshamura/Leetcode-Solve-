class Solution {
 public:
  bool isIsomorphic(string s, string t) {
    vector<int> Index_s(128);
    vector<int> Index_t(128);
    for (int i = 0; i < s.length(); ++i) {
      if (Index_s[s[i]] != Index_t[t[i]]) return false;
      Index_s[s[i]] = Index_t[t[i]] = i + 1;
    }
    return true;
  }
};
