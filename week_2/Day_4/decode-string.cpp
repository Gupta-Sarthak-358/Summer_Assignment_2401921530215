#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string decodeString(string s) {
        int currnum = 0;
        stack<int> num;
        stack<string> temp;
        string curr = "";

        for(char c : s) {
            if(isdigit(c)) {
                currnum = currnum * 10 + (c - '0');
            }
            else if(c == '[') {
                num.push(currnum);
                temp.push(curr);

                currnum = 0;
                curr = "";
            }
            else if(c == ']') {
                int mul = num.top(); num.pop();
                string prev = temp.top(); temp.pop();

                string tempo = "";
                for(int i = 0; i < mul; i++) {
                    tempo += curr;
                }
                curr = prev + tempo;
            }
            else {
                curr += c;
            }
        }
        return curr;
    }
};

int main(){
    Solution sol;
    string s = "3[a]2[bc]2[abc]3[cd]ef";
    cout << sol.decodeString(s) << endl; // Output: "aaabcbcabcabccdcdcdef"
    return 0;
}