class Solution {
 public:
  bool hasAlternatingBits(int n) {
    const int a = n ^ (n >> 2);
    return (a & (a - 1)) == 0;
  }
};
