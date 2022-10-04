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
    bool hasPathSum(TreeNode* root, int sum) {
        if(root==NULL) return false;//Base condition
        sum=sum-root->val;//Body
        if(sum==0&&root->left==NULL&root->right==NULL)  //Body
            return true;
        return hasPathSum(root->left,sum)||hasPathSum(root->right,sum);//propagation
    }
};
