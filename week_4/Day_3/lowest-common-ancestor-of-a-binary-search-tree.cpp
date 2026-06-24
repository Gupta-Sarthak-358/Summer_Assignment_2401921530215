#include<bits/stdc++.h>
using namespace std;

 struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(!root) return nullptr;
        if(root->val > p->val && root->val > q->val) return lowestCommonAncestor(root->left, p, q);
        if(root->val < p->val && root->val < q->val) return lowestCommonAncestor(root->right, p, q);
        
        return root;

    }
};

int main() {
    TreeNode* root = new TreeNode(6);
    root->left = new TreeNode(2);
    root->right = new TreeNode(8);
    root->left->left = new TreeNode(0);
    root->left->right = new TreeNode(4);
    root->right->left = new TreeNode(7);
    root->right->right = new TreeNode(9);
    
    TreeNode* p = root->left; // Node with value 2
    TreeNode* q = root->right; // Node with value 8
    
    Solution sol;
    TreeNode* lca = sol.lowestCommonAncestor(root, p, q);
    
    if (lca) {
        cout << "Lowest Common Ancestor: " << lca->val << endl;
    } else {
        cout << "Lowest Common Ancestor not found." << endl;
    }
    
    return 0;
}