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
    public  :

      int checkHeight(TreeNode *root ){
           if (root ==  nullptr ){ return 0 ;}
      

           int leftheight =  checkHeight(root->left) ;
           if (leftheight == -1 ){ return -1 ;  } 

         int rightHeight = checkHeight(root->right);
        if (rightHeight == -1){ return -1;  } 

           if(abs(leftheight -  rightHeight ) > 1 ){
            return  -1  ;  
            } 
            return 1  +  max(leftheight ,  rightHeight) ;
}

    public:
        bool isBalanced(TreeNode* root) {
        return checkHeight(root) != -1;
    }
   

      
};
