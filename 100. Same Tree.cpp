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
    bool isSameTree(TreeNode* p, TreeNode* q) 
    {
        return visit(p,q);
    }
    
    bool visit(TreeNode* p, TreeNode* q)
    {
        if(p==nullptr || q==nullptr)
        {
            return (p == q);
        }
        
        return (p->val == q->val) && visit(p->left,q->left) && visit(p->right,q->right);

    }
};