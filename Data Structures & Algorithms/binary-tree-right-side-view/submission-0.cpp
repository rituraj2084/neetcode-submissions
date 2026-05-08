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
    void bfs(TreeNode* root, vector<vector<int>>&res){
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int size = q.size();
            vector<int>temp;
            for(int i = 0; i < size; i++){
                TreeNode* node = q.front();
                q.pop();
                temp.push_back(node->val);
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
            res.push_back(temp);
        }
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int>res;
        if(!root) return res;
        vector<vector<int>> temp;
        bfs(root, temp);
        int n = temp.size();
        for(auto arr: temp){
            res.push_back(arr.back());
        }
        return res;
    }
};
