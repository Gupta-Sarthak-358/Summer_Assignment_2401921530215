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
    vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode* > st;
        TreeNode* current = root;
        vector<int> result;

        while(current || !st.empty()){
            while(current){
                st.push(current);
                current = current->left;
            }
            current = st.top();
            st.pop();
            result.push_back(current->val);
            current = current->right;
        }
        return result;
    }
};

int main(){
    Solution s;
    TreeNode* root = new TreeNode(1);
    root->right = new TreeNode(2);
    root->right->left = new TreeNode(3);

    vector<int> result = s.inorderTraversal(root);
    for(int val : result){
        cout << val << " "; // Output: 1 3 2
    }
    cout << endl;

    return 0;
}