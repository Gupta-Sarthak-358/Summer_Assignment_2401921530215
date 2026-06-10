#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0, j = 0;

        while (i < s.size() && j < t.size()) {
            if (s[i] == t[j]) i++;
            j++;
        }

        return i == s.size();
    }
};

int main() {
    Solution sol;
    string s = "abc";
    string t = "ahbgdc";
    cout << sol.isSubsequence(s, t) << endl; // Output: 1
    return 0;
}
