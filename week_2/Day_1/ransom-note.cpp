#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> freq(26, 0);
        for(char c: magazine) freq[c-'a']++;
        for(char c: ransomNote) freq[c-'a']--;
        for(int x: freq) if(x < 0) return false;
        return true;
    }   
};

int main(){
    string ransomNote, magazine;
    cin >> ransomNote >> magazine;
    Solution sol;
    cout << sol.canConstruct(ransomNote, magazine) << endl;
    return 0;
}