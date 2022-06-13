class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        stack<TreeNode*>st;
        TreeNode*node=root;
        vector<int>preorder;
        while(true){
            if(node!=NULL){
                st.push(node);
                preorder.push_back(node->val);
                node=node->left;
            }
            else{
                if(st.empty()==true)
                    break;
                node=st.top();
                st.pop();
                
                node=node->right;
                
            }
        }
        return preorder;
    }
};
