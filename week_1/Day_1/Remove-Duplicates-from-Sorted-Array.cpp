#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int last = 1;
        for(int i = 1; i < n; i++){
            if(nums[i] != nums[i-1]){
                nums[last++] = nums[i];
            }
        }
        return last;
    }
};

int main(){
    Solution sol;
    vector<int> nums = {1, 1, 2, 3, 4, 4, 4, 4, 5};

    int k = sol.removeDuplicates(nums);
    cout << "Number of unique elements: " << k << endl;
    cout << "Array after removing duplicates: ";
    for(int i = 0; i < k; i++){
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}