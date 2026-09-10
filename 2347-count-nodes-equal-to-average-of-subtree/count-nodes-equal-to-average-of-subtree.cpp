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
int ans=0;
pair<int,int> dfs(TreeNode*node)
{
    if(node==NULL)
    {
        return {0,0};
    }
    pair<int,int>l=dfs(node->left);
    int lsum=l.first;
    int lcnt=l.second;

    pair<int,int>r=dfs(node->right);
    int rsum=r.first;
    int rcnt=r.second;

    int sum=lsum+rsum+node->val;

    int tcnt=lcnt+rcnt+1;

    if(sum/tcnt==node->val)
    {
        ans++;
    }
    return {sum,tcnt};
}
    int averageOfSubtree(TreeNode* root) {
        dfs(root);
        return ans;
    }
};