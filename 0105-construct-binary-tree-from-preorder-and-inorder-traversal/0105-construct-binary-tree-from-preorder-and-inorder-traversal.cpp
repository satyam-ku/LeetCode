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
    TreeNode *buildTreeRecur(unordered_map<int,int> &mp, vector<int> &preorder, 
                     	int &preIndex, int left, int right) {

    // For empty inorder array, return null
    if (left > right)
        return nullptr;

    int rootVal = preorder[preIndex];
    preIndex++;

    TreeNode *root = new TreeNode(rootVal);

    int index = mp[rootVal];

    // Recursively create the left and right subtree.
    root->left = buildTreeRecur(mp, preorder, preIndex, left, index - 1);
    root->right = buildTreeRecur(mp, preorder, preIndex, index + 1, right);

    return root;
}
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        unordered_map<int,int> mp;
  	    for (int i = 0; i < inorder.size(); i++) 
      	    mp[inorder[i]] = i;
  
  	    int preIndex = 0;
        TreeNode *root = buildTreeRecur(mp, preorder, preIndex, 0, inorder.size() - 1);
        return root;
    }
};