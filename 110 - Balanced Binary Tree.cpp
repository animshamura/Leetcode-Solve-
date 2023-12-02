class Solution {
 public:
  bool isBalanced(TreeNode* root) {
    bool ans = true;
    MaxDepth(root, ans);
    return ans;
  }

  int MaxDepth(TreeNode* root, bool& ans) {
    if (root == nullptr || !ans) return 0;
    const int left = MaxDepth(root->left, ans);
    const int right = MaxDepth(root->right, ans);
    if (abs(left - right) > 1) ans = false;
     return max(left, right) + 1;
  }
};
