#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> answer;
    void backtrack(string s, int open, int closed, int n){
        if(open == closed && closed == n){
            answer.push_back(s);
            return;
        }
        if(open < n) backtrack(s+ "(", open+1, closed, n);
        if(closed < open) backtrack(s + ")", open, closed+1, n);
    }
    vector<string> generateParenthesis(int n) {
        backtrack("", 0,0, n);
        return answer;
    }
};

int main(){
    Solution sol;
    int n = 3;
    vector<string> result = sol.generateParenthesis(n);
    for(const string& s : result) {
        cout << s << endl;
    }
    return 0;
}