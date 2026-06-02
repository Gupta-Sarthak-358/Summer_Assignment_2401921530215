#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();

        int msum = nums[0];
        int rsum = nums[0];

        for(int i = 1; i < n; i++){
            rsum = max(nums[i], rsum + nums[i]);
            msum = max(msum, rsum);
        }
        return msum;
    }
};

int main(){
    Solution sol;
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4, 2, 1, -5, 4, -1, 2, 1, -5, 4};
    cout << sol.maxSubArray(nums) << endl;
    return 0;
}