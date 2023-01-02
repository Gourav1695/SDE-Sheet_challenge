class Solution {
  public:
  vector<int>answer;
    vector<int> maximumValue(Node* root) {
        //code here
        traversal(root,0);
        return answer;
    }
    void traversal(Node* root,int level){
        if(root==NULL) return ;
        if(answer.size()>level)
        {
            if(root->data>answer[level]){
                answer[level]=root->data;
            }
        }
        else
        {
            answer.push_back(root->data);
        }
        traversal(root->left,level+1);
        traversal(root->right,level+1);
    }
};
