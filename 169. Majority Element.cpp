class Solution {
 public:
  int majorityElement(vector<int>& nums) {
    int ans;
    int count = 0;

    for (const int num : nums) {
      if (count == 0) ans = num;
      count += pow(-1, ans==num);
    }

    return ans;
  }
};
