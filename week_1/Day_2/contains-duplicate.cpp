#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> s;
        
        for (int x : nums) {
            if (!s.insert(x).second)
                return true;
        }
        return false;
    }
};

int main(){
    Solution sol;
    vector<int> nums = {7,10,5,5,6,6,4,10,5,4,9,4,9,6,5,9,6,3,6,5,6,7,7,4,9,9,10,5,8,1,8,3,2,7,5,10,1,8,5,8,4,3,6,4};
    
    if (sol.containsDuplicate(nums)) {
        cout << "Contains duplicate elements." << endl;
    } else {
        cout << "No duplicate elements found." << endl;
    }
    
    return 0;
}