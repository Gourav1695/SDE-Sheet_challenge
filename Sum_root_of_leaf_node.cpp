class Solution {
public:
    int sumNumbers(TreeNode* root) {
        return sumNumbersHelper(root, 0);
    }
    
    int sumNumbersHelper(TreeNode* node, int sumSoFar) {
        if (node == nullptr) {
            return 0;
        }
        
        int newSum = sumSoFar * 10 + node->val;
        if (node->left == nullptr && node->right == nullptr) {
            return newSum;
        }
        
        int leftSum = sumNumbersHelper(node->left, newSum);
        int rightSum = sumNumbersHelper(node->right, newSum);
        
        return leftSum + rightSum;
    }
};
