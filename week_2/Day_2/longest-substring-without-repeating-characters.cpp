#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxCount = 0, left = 0;

        unordered_map<char, int> lastSeen;

        for(int right = 0; right < s.size(); right++){
            if(lastSeen.count(s[right]) && lastSeen[s[right]]>= left){
                left = lastSeen[s[right]] +1;
            }
            
            lastSeen[s[right]] = right;

            maxCount = max(maxCount, right - left + 1);
        }
        return maxCount;
    }
};

int main(){
    Solution sol;
    string s = "abcabcbb";
    cout << sol.lengthOfLongestSubstring(s) << endl; // Output: 3
    return 0;
}