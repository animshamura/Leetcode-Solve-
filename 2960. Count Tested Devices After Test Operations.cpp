class Solution {
 public:
  int countTestedDevices(vector<int>& batteryPercentages) {
    int ans = 0;

    for (const int p : batteryPercentages)
      if (p - ans > 0) ans++;

    return ans;
  }
};
