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
class Solution 
{
public:
    int goodNodes(TreeNode* root, int largest = INT_MIN) 
    {
        if(!root)   return 0;
        largest = max(root->val, largest);
        int left = goodNodes(root->left,largest);
        int right = goodNodes(root->right,largest);
        int ans = left + right;
        if(root->val >= largest)
            ans++;
        return ans;
    }
};