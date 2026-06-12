#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> map;
        for(string s : strs){
            string temp = s;
            sort(temp.begin(), temp.end());
            map[temp].push_back(s);
        }
        vector<vector<string>> ans;

        for(auto &pair : map){
            ans.push_back(pair.second);
        }
    return ans;
    }
};

int main(){
    Solution s;
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
    vector<vector<string>> ans = s.groupAnagrams(strs);
    for(auto &group : ans){
        for(string &str : group){
            cout << str << " ";
        }
        cout << endl;
    }
    return 0;
}