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
    bool helper(TreeNode* root, long long max, long long min){
        if(!root) return true;
        if(root->val <= min || root->val >= max) return false;
        
        return helper(root->left, root->val, min) && helper(root->right, max, root->val);
    }
    bool isValidBST(TreeNode* root) {
        return helper(root, LLONG_MAX, LLONG_MIN);
    }
};

int main(){
    Solution s;
    TreeNode* root = new TreeNode(2);
    root->left = new TreeNode(1);
    root->right = new TreeNode(3);
    cout<<s.isValidBST(root)<<endl;
}