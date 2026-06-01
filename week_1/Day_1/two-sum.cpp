#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int, int> mp;

        for(int i = 0; i < n; i++) {
            int check = target - nums[i];

            if(mp.find(check) != mp.end()) {
                return {mp[check], i};
            }

            mp[nums[i]] = i;
        }

        return {-1, -1};
    }
};

int main(){
    Solution sol;
    vector<int> nums = {3, 12, 16, 5};
    int target = 28;

    vector<int> result = sol.twoSum(nums, target);

    cout << "Indices: [" << result[0] << ", " << result[1] << "]" << endl;

    return 0;
}