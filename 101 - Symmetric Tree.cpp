class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        return Sym(root,root);
    }

private:
   bool Sym(TreeNode* m, TreeNode* n){
       if(!m || !n) return m==n;
       return (m->val==n->val)&&Sym(m->left,n->right)&&Sym(m->right,n->left);
   }
};
