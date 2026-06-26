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
    unordered_map<int,int> inorderPos;
    int preIdx = 0;

    TreeNode* build(vector<int>& preorder, int left, int right) {
        if(left > right) return nullptr;
        int rootVal = preorder[preIdx++];

        TreeNode* root = new TreeNode(rootVal);

        int split = inorderPos[rootVal];

        root->left = build(preorder, left, split - 1);
        root->right = build(preorder, split + 1, right);

        return root;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        for(int i=0;i<inorder.size();i++)
            inorderPos[inorder[i]] = i;
            
        return build(preorder, 0, inorder.size()-1);
    }
};

int main() {
    Solution solution;
    vector<int> preorder = {3,9,20,15,7};
    vector<int> inorder = {9,3,15,20,7};

    TreeNode* root = solution.buildTree(preorder, inorder);

    // Function to print the tree in inorder for verification
    function<void(TreeNode*)> printInorder = [&](TreeNode* node) {
        if (!node) return;
        printInorder(node->left);
        cout << node->val << " ";
        printInorder(node->right);
    };

    printInorder(root);
    cout << endl;

    return 0;
}