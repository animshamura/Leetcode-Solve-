class Solution {
 public:
  bool containsDuplicate(vector<int>& nums) {
    unordered_set<int> ans;

    for (const int num : nums)
      if (!ans.insert(num).second) return true;

    return false;
  }
};
