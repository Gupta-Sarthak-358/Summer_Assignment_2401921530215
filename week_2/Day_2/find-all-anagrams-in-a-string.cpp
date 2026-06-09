#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n = p.size();

        if(n > s.size()) return {};

        vector<int> freq1(26, 0);
        for(char ch : p)
            freq1[ch - 'a']++;

        vector<int> freq2(26, 0);
        vector<int> ans;

        for(int i = 0; i < s.size(); i++) {
            freq2[s[i] - 'a']++;

            if(i >= n) {
                freq2[s[i - n] - 'a']--;
            }

            if(i >= n - 1 && freq1 == freq2) {
                ans.push_back(i - n + 1);
            }
        }

        return ans;
    }
};

int main() {
    Solution sol;
    string s = "cbaebabahjdsacdaccdacadcdcdcddddcadadacdaacd";
    string p = "adc";
    vector<int> result = sol.findAnagrams(s, p);

    cout << "Anagram indices: ";
    for(int index : result) {
        cout << index << " ";
    }
    cout << endl;

    return 0;
}  
