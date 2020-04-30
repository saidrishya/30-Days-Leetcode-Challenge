/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    
    TreeNode* insert (TreeNode *root, int x){
        if(root==NULL){
            root = new TreeNode(x);
            return root;
        }
        else{
            if(x > root->val) root->right = insert(root->right,x);
            else root->left = insert(root->left,x);
        }
        return root;
        
    }
    
    TreeNode* bstFromPreorder(vector<int>& preorder) {
       
        TreeNode *root = NULL;
        for(auto i: preorder){
            root = insert(root, i);
        }
        return root;
        
    }
};
