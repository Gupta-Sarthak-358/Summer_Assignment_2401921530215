#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxLen = 0;
    string ans = "";

    void expand(int left, int right, string& s) {
        while (left >= 0 && right < s.size() && s[left] == s[right]) {
            left--;
            right++;
        }

        int len = right - left - 1;

        if (len > maxLen) {
            maxLen = len;
            ans = s.substr(left + 1, len);
        }
    }

    string longestPalindrome(string s) {
        if (s.size() == 1) return s;

        for (int i = 0; i < s.size(); i++) {
            expand(i, i, s);     
            expand(i, i + 1, s);
        }

        return ans;
    }
};


int main() {
    Solution sol;
    string s = "babad";
    cout << sol.longestPalindrome(s) << endl; // Output: "aba" or "bab"
    return 0;
}