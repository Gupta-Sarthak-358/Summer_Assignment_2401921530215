#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for (string &token : tokens) {
            if (token == "+" || token == "-" ||
                token == "*" || token == "/") {
                int second = st.top(); st.pop();
                int first = st.top(); st.pop();
                int res = 0;
                if (token == "+") res = first + second;
                else if (token == "-") res = first - second;
                else if (token == "*") res = first * second;
                else res = first / second;
                st.push(res);
            }
            else {
                st.push(stoi(token));
            }
        }

        return st.top();
    }
};

int main() {
    Solution sol;
    vector<string> tokens = {"2", "1", "+", "3", "*"};
    cout << sol.evalRPN(tokens) << endl; // Output: 9
    tokens = {"4", "13", "5", "/", "+"};
    cout << sol.evalRPN(tokens) << endl; // Output: 4 + (13 / 5) = 4 + 2 = 6
    return 0;
}