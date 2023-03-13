class Solution {
    public:
    bool isSymmetric (TreeNode* root){
        if(root==NULL) return true;
        return isSymmetricTest(root->left, root->right);
    }
    bool isSymmetricTest(TreeNode * p, TreeNode* q){
        if(p==NULL && q==NULL) return true ;
        else if(p==NULL || q==NULL) return false;
        else if ( p->val!=q->val) return false;
        return isSymmetricTest(p->left, q->right)&& isSymmetricTest(p->right, q->left);
    }

};
