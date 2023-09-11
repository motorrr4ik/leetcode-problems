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
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        if((root1 ==  nullptr) && (root2 == nullptr)) return nullptr;
        TreeNode* root3 = new TreeNode();
        if(root1 && root2){
            root3->val = root1->val + root2->val;
            root3->right = mergeTrees(root1->right, root2->right);
            root3->left = mergeTrees(root1->left, root2->left);
        }
        if(!root1){
            root3->val = root2->val;
            root3->right = mergeTrees(root1, root2->right);
            root3->left = mergeTrees(root1, root2->left);
        }

        if(!root2){
            root3->val = root1->val;
            root3->right = mergeTrees(root1->right, root2);
            root3->left = mergeTrees(root1->left, root2);
        }

        return root3;
    }
};