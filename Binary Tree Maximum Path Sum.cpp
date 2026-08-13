class Solution {
public:
    int height(TreeNode* root,int& maxi){
        if(root == NULL) return 0;
        int lh=max(0,height(root->left,maxi));
        int rh=max(0,height(root->right,maxi));
        maxi=max(maxi,(root->val+lh+rh));
        return root->val+max(lh,rh);
    }
    int maxPathSum(TreeNode* root) {
        int maxi=INT_MIN;
        height(root,maxi);
        return maxi;
    }
};
