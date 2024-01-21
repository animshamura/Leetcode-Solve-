class Solution {
 public:
  int sumOfLeftLeaves(TreeNode* root) {
    if (root == nullptr)  return 0;

    int res = 0;
    stack<TreeNode*> con{{root}};

    while(!con.empty()) {
      root = con.top(), con.pop();
      if(root->left) {
        if(!root->left->left && !root->left->right) res += root->left->val;
        else con.push(root->left);
      }
      if(root->right) con.push(root->right);
    }

    return res;
  }
};
