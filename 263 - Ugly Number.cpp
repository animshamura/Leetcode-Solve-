class Solution {
 public:
  bool isUgly(int n) {
    if (n == 0) return false;
    for (const int prime : {2, 3, 5}) while (!(n % prime)) n /= prime;
    return n == 1;
  }
};
