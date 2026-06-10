#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string t = s + s;
        return t.substr(1, t.size() - 2).find(s) != string::npos;
    }
};

int main() {
    Solution sol;
    string s = "abab";
    cout << sol.repeatedSubstringPattern(s) << endl; // Output: 1
    return 0;
}