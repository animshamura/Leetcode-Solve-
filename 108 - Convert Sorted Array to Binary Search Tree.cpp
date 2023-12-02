class Solution {
 public:
  TreeNode* sortedArrayToBST(vector<int>& nums) {
    return BinaryTreeBuilder(nums, 0, nums.size() - 1);
  }

 private:
  TreeNode* BinaryTreeBuilder(const vector<int>& nums, int l, int r) {
    if (l > r)  return nullptr;
    const int m = (l + r) / 2;
    return new TreeNode(nums[m], BinaryTreeBuilder(nums, l, m - 1), BinaryTreeBuilder(nums, m + 1, r));
  }
};
