#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool valid(char c) {
        if(c >= 'a' && c <= 'z') return true;
        if(c >= 'A' && c <= 'Z') return true;
        if(c >= '0' && c <= '9') return true;
        return false;
    }

    bool isPalindrome(string s) {
        int f = 0;
        int l = s.size() - 1;

        while(f <= l) {
            if(!valid(s[f])) {
                f++;
            }
            else if(!valid(s[l])) {
                l--;
            }
            else if(tolower(s[f]) != tolower(s[l])) {
                return false;
            }
            else {
                f++;
                l--;
            }
        }

        return true;
    }
};

int main() {
    Solution sol;
    string s = "You can ask the flowers, oh my brother, I don't know what to do";
    cout << sol.isPalindrome(s) << endl;
}