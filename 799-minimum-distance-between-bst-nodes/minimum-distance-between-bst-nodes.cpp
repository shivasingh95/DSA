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

    void minDiss(TreeNode* root , int &prev , int &ans ){
        if(!root){
            return ; 
        }

        minDiss(root->left , prev , ans);

        if(prev != INT_MIN){
            ans = min(ans , root->val - prev);
        }

        prev = root->val;

        minDiss(root->right , prev , ans); 
    }

    int minDiffInBST(TreeNode* root) {
        int ans = INT_MAX;
        int prev = INT_MIN;

        minDiss(root, prev, ans);  // 🔥 THIS WAS MISSING

        return ans;
    }
};