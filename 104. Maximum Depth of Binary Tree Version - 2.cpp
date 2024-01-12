class Solution {
public:
    int maxDepth(TreeNode* root) {
    if (root==nullptr) return 0;
    else return max(macDepth(root->left), max(root->right))+1;
    }
};
