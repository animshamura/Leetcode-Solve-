class Solution {
 public:
  int countDigitOne(int n) {
    int res = 0;

    for (long i = 1; i <= n; i *= 10) {
      const long d = i * 10;
      const int q = n / d;
      const int r = n % d;
      if (q > 0)  res += q * i;
      if (r >= i) res += min(r - i + 1, i);
    }
    return res;
  }
};
