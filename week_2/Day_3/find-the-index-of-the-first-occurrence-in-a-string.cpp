#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.empty()) return 0;

        int i = 0, j = 0;
        int start = -1;

        while (i < haystack.size()) {
            if (haystack[i] == needle[j]) {
                if (j == 0) start = i;
                j++;
                if (j == needle.size()) return start;
            } else {
                if (j > 0) i = start;
                j = 0;
                start = -1;
            }
            i++;
        }
        return -1;
    }
};

int main() {
    Solution sol;
    string haystack = "sadbutsad";
    string needle = "sad";
    cout << sol.strStr(haystack, needle) << endl; // Output: 0
    return 0;
}