#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int curr = 0;
        double maxavg = -1e18;
        for(int i = 0; i < nums.size(); i++){
            if(i >= k){
                maxavg = max(maxavg, curr/(double)k);
                curr -= nums[i-k]; 
            }
            curr += nums[i];
        }
    return max(maxavg, curr/(double)k);
    }
};

int main(){
    Solution sol;
    vector<int> nums = {1,12,-5,-6,50,3, 2, 5, 1, 120, -439, 3, 2, 5, 1, 120, -439};
    int k = 4;
    cout << sol.findMaxAverage(nums, k) << endl;
    return 0;
}