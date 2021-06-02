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
    void rec(TreeNode* root, vector<string> &res){
        res[res.size()-1]+="->"+to_string(root->val);
        string str = res[res.size()-1];
        if(!root->left && !root->right){
            return;
        }
        if(root->left){
            rec(root->left, res);
            if(root->right){
                res.push_back(str);
            }
        }
        if(root->right){
            rec(root->right,res);
        }
        
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> res;
        res.push_back(to_string(root->val));
        if(!root->left && !root->right){
            return res;
        }
        if(root->left){
            rec(root->left, res);
            if(root->right){
                res.push_back(to_string(root->val));
            }
        }
        if(root->right){
            rec(root->right,res);
        }
        return res;
    }
};
