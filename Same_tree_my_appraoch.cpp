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
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        // both empty
        if(p==NULL&&q==NULL){
            return true;
            
        }
        // both not empty ->compare them
        else if(p!=NULL&& q!=NULL)
            {
                return (p->val==q->val)
                &&isSameTree(p->left,q->left)
                &&isSameTree(p->right,q->right);
            }
        // one empty one not..
        else 
        return 0;
    }
};
