#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.size();

        if(n > s2.size()) return false;

        vector<int> freq1(26,0);
        for(char c : s1)
            freq1[c-'a']++;

        vector<int> freq2(26,0);
        
        for(int i = 0; i < s2.size(); i++) {
            freq2[s2[i]-'a']++;

            if(i >= n)
                freq2[s2[i-n]-'a']--;

            if(freq1 == freq2)
                return true;
        }

        return false;
    }
};

int main() {
    Solution sol;
    string s1 = "jkhaakhjhf";
    string s2 = "eidbjahffkajhakjfhkahf";

    cout << sol.checkInclusion(s1, s2) << endl; // Output: true

    return 0;
}   