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
    void dfs(TreeNode* root, int &count, int rootVal){
        if(!root) return;
        if(root->val >= rootVal) count++;
        rootVal = max(rootVal, root->val);
        dfs(root->left, count, rootVal);
        dfs(root->right, count, rootVal);
    }
    int goodNodes(TreeNode* root) {
        int count = 0;
        int rootVal = root->val;
        dfs(root, count, rootVal);
        return count;
    }
};
