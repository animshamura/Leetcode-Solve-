class Solution {
 public:
  bool isHappy(int n) {
    int s = Sum(n);
    int f = Sum(Sum(n));

    while (s != f) {
      s = Sum(s);
      f = Sum(Sum(f));
    }
    return s == 1;
  }

 private:
  int Sum(int n) {
    int sum = 0;
    while (n) {
      sum += pow(n % 10, 2);
      n /= 10;
    }
    return sum;
  }
  };
