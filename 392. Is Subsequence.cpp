class Solution {
public:
    bool isSubsequence(string s, string t) {
     if (!s.length()) return true;

    int i = 0;
    for (char c : t) if (s[i] == c) i++;

    return i==s.length();
    }
};
