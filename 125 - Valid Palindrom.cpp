class Solution {
 public:
  bool isPalindrome(string s) {
    int r = s.length()-1;
    for(int l = 0; l < r; l++,r-- ){
      while (l < r && !isalnum(s[l])) l++;
      while (l < r && !isalnum(s[r])) r--;
      if (tolower(s[l]) != tolower(s[r])) return false;
    }
    return true;
  }
};
