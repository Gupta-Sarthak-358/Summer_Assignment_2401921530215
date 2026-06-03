#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        
        int left = 0;
        int right = n - 1;
        int pos = n - 1;
        
        vector<int> ans(n, 0);
        while (left <= right) {
            if (abs(nums[left]) > abs(nums[right])) {
                ans[pos] = nums[left] * nums[left];
                left++;
            } else {
                ans[pos] = nums[right] * nums[right];
                right--;
            }
            pos--;
        }
        return ans;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {-4, -2, -1, 0, 3, 10, 15};
    vector<int> result = sol.sortedSquares(nums);
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}