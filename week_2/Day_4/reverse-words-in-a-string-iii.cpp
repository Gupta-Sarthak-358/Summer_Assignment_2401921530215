#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        int start = 0;

        for (int i = 0; i <= s.size(); i++) {
            if (i == s.size() || s[i] == ' ') {
                reverse(s.begin() + start, s.begin() + i);
                start = i + 1;
            }
        }

        return s;
    }
};

int main() {
    Solution solution;
    string s = "Let's take LeetCode contest";
    cout << solution.reverseWords(s) << endl; // Output: "s'teL ekat edoCteeL tsetnoc"
    return 0;
}