class Solution {
public:
    int  monitored=-1, is_camera=0, need_camera=1;
    int count =0;
    int minCameraCover(TreeNode* root) {
        int rootCameraInfo= cameraNodeInfo(root);
        if(rootCameraInfo==need_camera)
            return count +1;
        return count ;
    }
    int cameraNodeInfo(TreeNode*root)
    {
        if (root==NULL) return monitored;
        int left= cameraNodeInfo(root->left);
        int right = cameraNodeInfo(root->right);
        
        if(left== need_camera||right== need_camera)
        {
            count ++;
            return is_camera;
            
        }
        else if (left==is_camera ||right==is_camera)
            return monitored;
        return need_camera;
    }
    
};
