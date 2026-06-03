#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int pointer = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] != 0) {
                swap(nums[pointer++], nums[i]);
            }
        }
    }
};

int main() {
    Solution sol;
    vector<int> nums = {0, 1, 0, 3, 12, 1, 0, 0, 2};
    sol.moveZeroes(nums);
    for(int num : nums) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}