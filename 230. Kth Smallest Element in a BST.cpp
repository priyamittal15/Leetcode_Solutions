class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
        if(root==NULL) return 0;
        
        int left=kthSmallest(root->left,k);         
        if(left) return left;                     
        k--;
        if(k==0) return root->val;                
         
        int right=kthSmallest(root->right,k);     
        if(right) return right;                  
        
        return 0;              
    }
};
