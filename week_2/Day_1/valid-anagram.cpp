#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        int freq[26];
        for(char c : s) freq[c -'a']++;
        for(char c : t) freq[c-'a']--;
        for(int i = 0; i < 26; i++){
            if(freq[i]!=0) return false;
        }
        return true;
    }
};

int main(){
    string s, t;
    cin >> s >> t;
    Solution sol;
    cout << sol.isAnagram(s, t) << endl;
    return 0;
}