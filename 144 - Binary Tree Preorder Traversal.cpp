/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    vector<int> con;
    stack<TreeNode*> stk;
public:
    vector<int> preorderTraversal(TreeNode* root) {

        while(root || stk.size()){
            while(root){
                stk.push(root);
                con.push_back(root->val);
                root=root->left;
            }
            root=stk.top();
            stk.pop();
            root=root->right;
        }
        return con;
    }
};