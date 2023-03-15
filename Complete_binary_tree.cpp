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
    bool isCompleteTree(TreeNode* root) {
        if (root == NULL) {
        return true;
    }

    queue<TreeNode*> q;
    q.push(root);
    bool is_last_level = false;

    while (!q.empty()) {
        TreeNode* node = q.front();
        q.pop();

        if (node->left != NULL) {
            // If we have already seen a missing node in the last level,
            // but there is a non-empty left child for the current node,
            // then the tree is not complete.
            if (is_last_level) {
                return false;
            }
            q.push(node->left);
        }
        else {
            // If the current node does not have a left child, mark that we
            // have seen a missing node in the last level.
            is_last_level = true;
        }

        if (node->right != NULL) {
            // Same as for the left child.
            if (is_last_level) {
                return false;
            }
            q.push(node->right);
        }
        else {
            is_last_level = true;
        }
    }

    // If we reached here, the tree is complete.
    return true;
    }
};
