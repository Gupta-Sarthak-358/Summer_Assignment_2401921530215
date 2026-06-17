#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        unordered_map<char, char> mp = {
            {')', '('},
            {']', '['},
            {'}', '{'}
        };

        for(char ch : s) {
            if(mp.count(ch)) {
                if(st.empty() || st.top() != mp[ch])
                    return false;
                st.pop();
            }
            else {
                st.push(ch);
            }
        }

        return st.empty();
    }
};


int main() {
    Solution sol;
    string s = "({[]})";
    if(sol.isValid(s)) {
        cout << "The parentheses are valid." << endl;
    } else {
        cout << "The parentheses are not valid." << endl;
    }
    return 0;
}
